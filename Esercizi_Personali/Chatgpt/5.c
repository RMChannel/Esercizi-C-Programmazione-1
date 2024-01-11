#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    if (argc!=3) {
        printf("Uso: ./a.exe <parola> <file>\n");
        exit(EXIT_FAILURE);
    }
    else if ((fp=fopen(argv[2],"r"))==NULL) {
        printf("File non trovato\n");
        exit(EXIT_FAILURE);
    }
    int n=1;
    printf("Righe contenenti \"%s\":\n",argv[1]);
    for (char line[10000]="";fgets(line,sizeof(line),fp);n++) {
        if (strstr(line,argv[1])) printf("%d. %s",n,line);
    }
}