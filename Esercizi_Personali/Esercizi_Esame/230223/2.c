#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    int function;
    if ((fp=fopen("temperature.txt","r"))==NULL) {
        printf("File non trovato\n");
        exit(EXIT_FAILURE);
    }
    if (argc==1 || argc>3) {
        printf("Numero di argomenti errato, riprovare\n");
        return 1;
    }
    else if (argc==2) function=1;
    else if (argc==3 && atoi(argv[1]) && atoi(argv[2])) function=2;
    else {
        if ((!strcmp(argv[1],"inf")) && (!strcmp(argv[1],"sup"))) {
            printf("Comando non corretto, inserire o inf o sup\n");
            return 2;
        }
        function=3;
    }
    char line[1000]="";
    char cittamax[100]="";
    int tempmax=0;
    int iprobmax=0;
    while (fgets(line,sizeof(line),fp)) {
        char citta[100]="";
        int temp=0;
        char prob[100]="";
        sscanf(line,"%s %d %[^\n]s",citta,&temp,prob);
        if (function==1) {
            if (!strcmp(citta,argv[1])) printf("%s %d\n",citta,temp);
        }
        else if (function==2) {
            if (temp>=atoi(argv[1]) && temp<=atoi(argv[2])) printf("%s %d\n",citta,temp);
        }
        else {
            int iprob=0;
            for (char *s=prob;*s;s++) {
                if (*s=='.') break;
                else if (*s==',') iprob+=25;
            }
            if (!(strcmp(argv[1],"inf"))) {
                if (temp>tempmax && iprob<(atoi(argv[2]))) {
                    tempmax=temp;
                    strcpy(cittamax,citta);
                    iprobmax=iprob;
                }
            }
            else {
                if (temp>tempmax && iprob>(atoi(argv[2]))) {
                    tempmax=temp;
                    strcpy(cittamax,citta);
                    iprobmax=iprob;
                }
            }
        }
    }
    if (function==3) printf("%s %d %d%%\n",cittamax,tempmax,iprobmax);
}