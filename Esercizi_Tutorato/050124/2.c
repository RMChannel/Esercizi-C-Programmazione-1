#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pulisci(char *s) {
    while (*s) s++;
    for (;((*s<'a' || *s>'z') && (*s<'A' || *s>'Z'));s--) *s='\0';
}

int instring(char *s, char *t) {
    for (;(*s==*t && *t && *s);s++,t++);
    return (!(*t));
}

int main(int argc, char *argv[]) {
    FILE *fp;
    int function;
    if ((fp=fopen("frequenze.txt","r"))==NULL) {
        printf("File non trovato\n");
        exit(EXIT_FAILURE);
    }
    else if (argc!=2) {
        printf("Uso: ./frequenze <stazione>\nUso: ./frequenze <freq>\n");
        exit(EXIT_FAILURE);
    }
    else if (atof(argv[1])) function=2;
    else function=1;
    char line[100]="";
    char radiovicina[50]="";
    char radiovicina2[50]="";
    float freqvicina=1000;
    float freqvicina2=1000;
    float diffcalc=1000;
    while (fgets(line,sizeof(line),fp)) {
        char radio[50]="";
        float freq;
        sscanf(line,"%[^\t] %f",radio,&freq);
        pulisci(radio);
        if (function==1 && instring(radio,argv[1])) printf("%s %.2f\n",radio,freq);
        else if (function==2) {
            float diff;
            if (atof(argv[1])>freq) diff=(atof(argv[1])-freq);
            else {
                diff=freq-atof(argv[1]);
            }
            if (diff<diffcalc) {
                freqvicina=freq;
                diffcalc=diff;
                strcpy(radiovicina,radio);
            }
            else if (diff-diffcalc<0.001) {
                freqvicina2=freq;
                strcpy(radiovicina2,radio);
            }
        }
    }
    if (function==2) printf("%s %.2f\n",radiovicina,freqvicina);
    if (function==2 && freqvicina2!=1000) printf("%s %.2f\n",radiovicina2,freqvicina2);
    fclose(fp);
    return 0;
}