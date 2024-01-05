#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int instring(char  *s, char *t) {
    for (;(*s && *t && *s==*t);s++,t++);
    return (!(*t));
}

int main(int argc, char *argv[]) {
    FILE *fp;
    if ((fp=fopen("classifica.txt","r"))==NULL) {
        printf("File non trovato\n");
        exit(EXIT_FAILURE);
    }
    else if (argc!=2 && argc!=3) {
        printf("Uso corretto:\n./a.out <cognome>\n./a.out <base punteggio> <fine punteggio>\n");
        exit(EXIT_FAILURE);
    }
    char line[100]="";
    int maxscore=0;
    char maxnome[20]="";
    char maxcognome[20]="";
    char maxnation[4]="";
    while (fgets(line,sizeof(line),fp)) {
        char nome[20]="";
        char cognome[20]="";
        char nation[4]="";
        char automobile[50]="";
        int punteggio=0;
        sscanf(line," %s %s %s %d %[^\n]",nome,cognome,nation,&punteggio,automobile);
        if (argc==2 && instring(cognome,argv[1])) printf("%s %s %s %s %d\n",nome,cognome,nation,automobile,punteggio);
        else if (argc==3 && (punteggio>atoi(argv[1])) && (punteggio<atoi(argv[2])) && (punteggio>maxscore)) {
            maxscore=punteggio;
            strcpy(maxnome,nome);
            strcpy(maxcognome,cognome);
            strcpy(maxnation,nation);
        }
    }
    if (argc==3) printf("%s %s %s %d\n",maxnome,maxcognome,maxnation,maxscore);
}