#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *meteocalc(char *s) {
    if (*s=='p') return "piovoso";
    else if (*s=='s') return "soleggiato";
    else {
        int n=0;
        for (;*s=='n';s++,n++);
        if (n==1) return "nubi sparse";
        else if (n==2) return "poco nuvoloso";
        else return "molto nuvoloso";
    }
}

int main(int argc, char *argv[]) {
    FILE *fp;
    int function;
    if ((fp=fopen("temperature.txt","r"))==NULL) {
        printf("File non trovato\n");
        exit(EXIT_FAILURE);
    }
    int temp=0;
    char cittatemp[20]="";
    function=argc;
    if (function>3) return 1;
    char line[100]="";
    while (fgets(line,sizeof(line),fp)) {
        char citta[20]="";
        char meteo[5]="";
        int tmin, tora, tmax;
        sscanf(line,"%s %d %d %d %[^\n]",citta,&tmin,&tora,&tmax,meteo);
        if (function==1) printf("%s %d %d %d\n",citta,tmin,tora,tmax);
        else if (function==2 && !strcmp(citta,argv[1])) printf("%s %d %s\n",citta,tora,meteocalc(meteo));
        else if (!strcmp(meteo,argv[1])) {
            if (!(temp)) {
                if (!strcmp(argv[2],"min")) temp=tmin;
                else temp=tmax;
                strcpy(cittatemp,citta);
            }
            else {
                if ((!strcmp(argv[2],"min")) && (temp>tmin)) {
                    temp=tmin;
                    strcpy(cittatemp,citta);
                }
                else if (temp<tmax && (!strcmp(argv[2],"max"))) {
                    temp=tmax;
                    strcpy(cittatemp,citta);
                }
            }
        }
    }
    if (function==3) {
        if (!strcmp(argv[2],"min")) printf("temp min: ");
        else printf("temp max: ");
        printf("%s\n",cittatemp);
    }
    fclose(fp);
    return 0;
}