#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100

int main(int argc, char *argv[]) {
    FILE *fp;
    int function, victory=0, flag=0;
    char line[N]="";
    if ((fp=fopen("albo_piloti.txt","r"))==NULL) {
        printf("Il file non può essere letto\n");
        exit(EXIT_FAILURE);
    }
    if (argc<2 || argc>4) {
        printf("Numero argomenti errato\n");
        return 0;
    }
    else {
        int year;
        if ((year=atoi(argv[1]))) function=2;
        else if (argc==2) function=1;
        while (fgets(line, sizeof(line), fp)) {
            char nation[N]="";
            char nome1[N]="";
            char nome2[N]="";
            char nome3[N]="";
            int yearff=0;
            sscanf(line,"%s %s %s %s",nation,nome1,nome2,nome3);
            if ((atoi(nome3))) {
                yearff=atoi(nome3);
                for (int i=0;i<N;i++) nome3[i]='\0';
            }
            if (function==2) {
                char temp[N]="";
                char *linetemp=line;
                while (*linetemp<'0' || *linetemp>'9') linetemp++;
                while (sscanf(linetemp,"%s",temp)) {
                    if ((atoi(temp))==year) {
                        printf("%s %s",nome1,nome2);
                        if (nome3[0]!='\0') printf(" %s",nome3);
                        printf("\n");
                    }
                    linetemp+=5;
                    if (*linetemp=='\0') break;
                }
            }
            else if (!(strcmp(nation,argv[1])) && function==1) {
                flag=1;
                char temp[N]="";
                char *linetemp=line;
                int n=0;
                while (*linetemp<'0' || *linetemp>'9') linetemp++;
                while (sscanf(linetemp,"%s",temp)) {
                    n++;
                    victory++;
                    linetemp+=5;
                    if (*linetemp=='\0') break;
                }
                printf("%s %s",nome1,nome2);
                if (nome3[0]!='\0') printf(" %s",nome3);
                printf(" %d\n",n);
            }
            else {
                char temp[N]="";
                char *linetemp=line;
                if ((!strcmp(nome1,argv[1])) || (!strcmp(nome2,argv[1])) || (!strcmp(nome3,argv[1])) && (argc<3|| (strcmp(nome2,argv[2])))) {
                    printf("%s %s",nome1,nome2);
                    if (nome3[0]!='\0') printf(" %s",nome3);
                    while (*linetemp<'0' || *linetemp>'9') linetemp++;
                    while (sscanf(linetemp,"%s",temp)) {
                        if ((atoi(temp))) printf(" %s",temp);
                        linetemp+=5;
                        if (*linetemp=='\0') break;
                    }
                    printf("\n");
                }
            }
        }
        if (flag) printf("%d\n",victory);
    }
    fclose(fp);
}