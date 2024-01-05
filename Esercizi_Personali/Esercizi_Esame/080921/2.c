#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int convert_time(char *s) {
    int h,m;
    sscanf(s,"%d:%d",&h,&m);
    return (h*60)+m;
}

int main(int argc, char *argv[]) {
    FILE *fp;
    if ((fp=fopen("orari.txt","r"))==NULL) {
        printf("File non trovato\n");
        exit(EXIT_FAILURE);
    }
    else if ((argc!=3 && argc!=4) || (argv[1][0]!='p' && argv[1][0]!='q')) {
        printf("Uso scorretto del programma rilevato, uso corretto:\n./treni q <orario>\n./treni p <orario> <n cambi>\n");
        exit(EXIT_FAILURE);
    }
    int time=convert_time(argv[2]);
    char line[50]="";
    while (fgets(line,sizeof(line),fp)) {
        int h1,m1,h2,m2,ncambi,timefromfile1;
        sscanf(line,"%d:%d %d:%d %d",&h1,&m1,&h2,&m2,&ncambi);
        timefromfile1=(h1*60)+m1;
        if (argv[1][0]=='q' && timefromfile1==time) printf("%.2d:%.2d %.2d:%.2d\n",h1,m1,h2,m2);
        else if (argv[1][0]=='p' && ncambi<=atoi(argv[3]) && timefromfile1<time) printf("%.2d:%.2d %.2d:%.2d %d\n",h1,m1,h2,m2,ncambi);
    }
}