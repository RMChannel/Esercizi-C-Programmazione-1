#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long int convertdistance(char *s) {
    long int n=0;
    for (;*s;s++) {
        if (*s>='0' && *s<='9') {
            n*=10;
            n+=(*s-'0');
        }
    }
    return n;
}

int main(int argc, char *argv[]) {
    FILE *fp;
    if ((fp=fopen("moons.txt","r"))==NULL) {
        printf("File non trovato\n");
        exit(EXIT_FAILURE);
    }
    else if (argc<2 || argc>3) {
        printf("Uso scorretto del programma rilevato, uso corretto:./moon <satellite>\n./moon <anno>\n./moon d <anno>\n");
        return 1;
    }
    else {
        int function;
        char min[20]="";
        char max[20]="";
        char mindimensione[50]="0";
        char maxdimensione[50]="0";
        int dmin=0;
        int dmax=0;
        if (argc==2 && atoi(argv[1])) function=2;
        else if (argc==2) function=1;
        else function=3;
        char line[100]="";
        while (fgets(line,sizeof(line),fp)) {
            char satellite[20]="";
            char scopritore[50]="";
            char dimensione[50]="";
            int year, d;
            sscanf(line,"%s %d %s %d %[^\n]",satellite,&year,dimensione,&d,scopritore);
            if (function==1) {
                if (!strcmp(argv[1],satellite)) printf("%s (%d) %s",satellite,year,scopritore);
            }
            else if (function==2) {
                if (year==atoi(argv[1])) printf("%s (diametro=%d km)\n",scopritore,d);
            }
            else if (year==atoi(argv[2])) {
                long int dim=convertdistance(dimensione);
                if (convertdistance(mindimensione)==0) {
                    strcpy(mindimensione,dimensione);
                    strcpy(maxdimensione,dimensione);
                    strcpy(min,satellite);
                    strcpy(max,satellite);
                    dmin=d;
                    dmax=d;
                }
                else {
                    if (dim>convertdistance(maxdimensione)) {
                        strcpy(maxdimensione,dimensione);
                        strcpy(max,satellite);
                        dmax=d;
                    }
                    else if (dim<convertdistance(mindimensione)) {
                        strcpy(mindimensione,dimensione);
                        strcpy(min,satellite);
                        dmin=d;
                    }
                }
            }
        }
        if (function==3) printf("%s (distanza = %s km) (diametro = %d km)\n%s (distanza = %s km) (diametro = %d km)\n",min,mindimensione,dmin,max,maxdimensione,dmax);
    }
    fclose(fp);
    return 0;
}