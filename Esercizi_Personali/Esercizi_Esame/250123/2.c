#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TRUE 1
#define FALSE 0

long int convertabitanti(char *s) {
    long int n=0;
    while (*s!='\n' && *s) {
        if (*s=='.') s++;
        n=n*10+(*s-'0');
        s++;
    }
    return n;
}

int main(int argc, char *argv[]) {
    FILE *fp;
    char line[1000]="";
    if ((fp=fopen("istat.txt","r"))==NULL) {
        printf("Il file non e' leggibile\n");
        exit(EXIT_FAILURE);
    }
    if (argc==1 || argc>3) {
        printf("Uso corretto ./istat <nome citta'/regione>/<numero abitanti> +/-\n");
        return -1;
    }
    long int totabitanti=0;
    int flag=FALSE;
    if (argc==3) totabitanti=convertabitanti(argv[1]);
    while (fgets(line, sizeof(line), fp)) {
        char citta[100]="";
        char provincia[3]="";
        char regione[100]="";
        long int nabitanti=0;
        char *s=line;
        sscanf(line,"%s %s %[^,]s",citta,provincia,regione);
        while(*s<'0' || *s>'9') s++;
        nabitanti=convertabitanti(s);
        if (argc==3) {
            if (argv[2][0]=='+') {
                if (nabitanti>totabitanti) printf("%s %ld\n",citta,nabitanti);
            }
            else if (argv[2][0]=='-') {
                if (nabitanti<totabitanti) printf("%s %ld\n",citta,nabitanti);
            }
        }
        else {
            if(!strcmp(citta,argv[1])) {
                printf("%s ", provincia);
                char *t=line;
                while (*t<'0' || *t>'9') t++;
                for (;*t!='\n';t++) printf("%c",*t);
                printf("\n");
            }
            else if(!strcmp(regione,argv[1])) {
                printf("%s %s\n", citta, provincia);
                totabitanti+=nabitanti;
                flag=TRUE;
            }
        }
    }
    if (flag) printf("%ld\n",totabitanti);
}