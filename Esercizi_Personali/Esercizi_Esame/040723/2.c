#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calcolatempo(char *s) {
    int h, m;
    sscanf(s,"%d:%d",&h,&m);
    return (h*60)+m;
}

int strinstr(char *s, char *t) {
    for (;(*s && *t);s++) if (*s==*t) t++;
    if (!(*t)) return 1;
    else return 0;
}

int main(int argc, void *argv[]) {
    FILE *fp;
    int function;
    if ((fp=fopen("agenda.txt","r"))==NULL) {
        printf("File non trovato\n");
        exit(EXIT_FAILURE);
    }
    if (argc>3) {
        printf("Numero argomento non corretto\nUso corretto:\n./agenda <nessun argomento>\n./agenda <orario>\n./agenda <orario> <descrizione>\n");
        return 1;
    }
    char line[1000]="";
    int tempodato=0;
    if (argc==1) function=1;
    else if (argc==2) function=2;
    else function=3;
    tempodato=calcolatempo(argv[1]);
    while (fgets(line,sizeof(line),fp)) {
        int h1,m1,h2,m2;
        char desc[100]="";
        sscanf(line,"%d:%d - %d:%d %[^\n]s",&h1,&m1,&h2,&m2,desc);
        if (function==1) printf("%s",line);
        else if (function==2) {
            if (tempodato>=((h1*60)+m1) && tempodato<=((h2*60)+m2)) {
                printf("%s (fino alle %.2d:%.2d)\n",desc,h2,m2);
                break;
            }
            else if (tempodato<=((h1*60)+m1)) {
                printf("%s (fino alle %.2d:%.2d)\n",desc,h2,m2);
                break;
            }
        }
        else {
            if (((h1*60)+m1)>=tempodato && strinstr(desc,argv[2])) printf("%s (alle %.2d:%.2d)\n",desc,h1,m1);
        }
    }
    if (function==1) printf("\n");
}