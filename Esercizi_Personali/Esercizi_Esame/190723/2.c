#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    int function;
    if ((fp=fopen("laghi.txt","r"))==NULL) {
        printf("File non trovato\n");
        exit(EXIT_FAILURE);
    }
    else if (argc==1) function=1;
    else if (argc==2 && atoi(argv[1])) function=3;
    else if (argc==2) function=2;
    else {
        printf("Uso corretto:\n./a.exe\n./a.exe <fiume>\n./a.exe <int>\n");
        exit(EXIT_FAILURE);
    }
    char line[100]="";
    char lagomax[20]="";
    int altitudinemax=0;
    while (fgets(line,sizeof(line),fp)) {
        char lago[20]="";
        char regioni[50]="";
        int area, profondita, altitudine;
        sscanf(line,"%s %d %d %d %[^\n]",lago,&area,&profondita,&altitudine,regioni);
        if (function==1) printf("%s %d %d\n",lago,profondita,altitudine);
        else if (function==2 && strstr(regioni,argv[1])) printf("%s %d %d\n",lago,profondita,altitudine);
        else if (function==3 && area>(atoi(argv[1]))) {
            printf("%s %d %d\n",lago,profondita,altitudine);
            if (altitudine>altitudinemax) {
                altitudinemax=altitudine;
                strcpy(lagomax,lago);
            }
        }
    }
    if (function==3) printf("Lago con altitudine massima: %s\n",lagomax);
}

//Già fatto in precedenza