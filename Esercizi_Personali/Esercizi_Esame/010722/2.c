#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calcolatempo(char *s, int h, int m) {
    if (strlen(s)==0) return ((h*60)+m);
    else {
        sscanf(s,"%d:%d",&h,&m);
        return ((h*60)+m);
    }
}

int main(int argc, char *argv[]) {
    FILE *fp;
    int function, starttime, endtime;
    if ((fp=fopen("orari.txt","r"))==NULL) {
        printf("File non trovato\n"),
        exit(EXIT_FAILURE);
    }
    else if (argc==2 && argv[1][0]=='1') function=1;
    else if (argc==3) {
        function=2;
        starttime=calcolatempo(argv[1],0,0);
        endtime=calcolatempo(argv[2],0,0);
    }
    else {
        printf("Uso corretto:\n./a.exe 1\n./a.exe <orario inizio> <orario fine>\n");
        exit(EXIT_FAILURE);
    }
    char line[100]="";
    int difference=9999;
    int hd1,md1,hd2,md2,cambid;
    while (fgets(line,sizeof(line),fp)) {
        int h1,m1,h2,m2,cambi;
        sscanf(line,"%d:%d - %d:%d %d",&h1,&m1,&h2,&m2,&cambi);
        if (function==1) printf("%.2d:%.2d %.2d:%.2d %d\n",h1,m1,h2,m2,cambi);
        else if (function==2) {
            int starttime2=calcolatempo("",h1,m1);
            int endtime2=calcolatempo("",h2,m2);
            if ((starttime2>=starttime) && (endtime2<=endtime)) {
                printf("%.2d:%.2d %.2d:%.2d %d\n",h1,m1,h2,m2,cambi);
                if ((((h2*60)+m2)-((h1*60)+m1))<difference) {
                    difference=(((h2*60)+m2)-((h1*60)+m1));
                    hd1=h1;
                    md1=m1;
                    hd2=h2;
                    md2=m2;
                    cambid=cambi;
                }
            }
        }
    }
    if (function==2) {
        int h=0;
        for (;difference>=60;difference-=60,h++);
        printf("%.2d:%.2d %.2d:%.2d %d (%.2d:%.2d)\n",hd1,md1,hd2,md2,cambid,h,difference);
    }
    fclose(fp);
    return 0;
}