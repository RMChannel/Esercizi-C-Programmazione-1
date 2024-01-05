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
    else if (argc==2 && atoi(argv[1])) function=1;
    else if (argc==3 && atoi(argv[1]) && atoi(argv[2])) function=3;
    else if (argc==3 && atoi(argv[2]) && argv[1][0]=='v') function=2;
    else {
        printf("Uso scorretto del programma rilevato, uso corretto:\n./campionato <punteggio>\n./campionato v <max vittorie>\n./campionato <punti minimo> <punti massimo>\n");
        exit(EXIT_FAILURE);
    }
    char line[100]="";
    int maxgol=0;
    int mingol=100;
    int maxvictory=0;
    char maxsquadra[20]="";
    char minsquadra[20]="";
    while (fgets(line,sizeof(line),fp)) {
        char squadra[20]="";
        int victory, pareggi, lose, golf, gols, score;
        sscanf(line,"%s %d %d %d %d %d",squadra,&victory,&pareggi,&lose,&golf,&gols);
        score=(victory*2)+pareggi;
        if (function==1 && (score>atoi(argv[1]))) printf("%s %d\n",squadra,score);
        else if (function==2 && golf>maxgol && victory<=atoi(argv[2])) {
            maxgol=golf;
            maxvictory=victory;
            strcpy(maxsquadra,squadra);
        }
        else if (function==3 && (score>=atoi(argv[1]) && score<=atoi(argv[2]))) {
            if (golf>maxgol) {
                maxgol=golf;
                strcpy(maxsquadra,squadra);
            }
            else if (golf<mingol) {
                mingol=golf;
                strcpy(minsquadra,squadra);
            }
        }
    }
    if (function==2) printf("%s %d %d\n",maxsquadra,maxvictory,maxgol);
    else if (function==3) printf("%s %d\n%s %d\n",maxsquadra,maxgol,minsquadra,mingol);
    fclose(fp);
    return 0;
}