#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    int function;
    if ((fp=fopen("classifica.txt","r"))==NULL) {
        printf("File non trovato\n");
        exit(EXIT_FAILURE);
    }
    else if (argc==2) function=1;
    else if (argc==3 && atoi(argv[1]) && atoi(argv[2])) function=2;
    else if (argc==3 && atoi(argv[2])) function=3;
    else {
        printf("Uso corretto:\n./a.exe <squadra>\n./a.exe <min punteggio> <max punteggio>\n./a.exe <-a or -d> <punteggio minimo>\n");
        exit(EXIT_FAILURE);
    }
    char line[100]="";
    char printsquadra[15]="";
    int printgol=0;
    while (fgets(line,sizeof(line),fp)) {
        char squadra[15]="";
        int punteggio, games, victory, pareggi, lose, golf, gols;
        sscanf(line,"%[^,], %d %d %d %d %d %d %d",squadra,&punteggio,&games,&victory,&pareggi,&lose,&golf,&gols);
        if (function==1 && !strcmp(argv[1],squadra)) printf("%s %d\n",squadra,punteggio);
        else if (function==2 && punteggio>=atoi(argv[1]) && punteggio<=atoi(argv[2])) printf("%s %d\n",squadra,punteggio);
        else if (function==3 && punteggio>=atoi(argv[2])) {
            if (!printgol && !strcmp("-d",argv[1])) printgol=100;
            if (!strcmp("-a",argv[1]) && printgol<golf) {
                printgol=golf;
                strcpy(printsquadra,squadra);
            }
            else if (!strcmp("-d",argv[1]) && gols<printgol) {
                printgol=gols;
                strcpy(printsquadra,squadra);
            }
        }
    }
    if (function==3) {
        printf("%s, gol ",printsquadra);
        if (!strcmp("-a",argv[1])) printf("fatti: %d\n",printgol);
        else printf("subiti: %d\n",printgol);
    }
}