#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#define NOME_FILE "a.txt"

void copia_stringa(char s[], char t[]) {
    for (int i=0;i<1000;i++) t[i]='\0';
    for (int i=0;i<strlen(s);i++) t[i]=s[i];
}


int main(void) {
    FILE *fp;
    if ( (fp=fopen(NOME_FILE, "r"))  == NULL  ) {
        fprintf(stderr, "Non posso aprire il file %s\n", NOME_FILE);
        exit(EXIT_FAILURE);
        }
    char line[1000]="", temp[1000]="";
    do {
        copia_stringa(line,temp);
        fgets(line, sizeof(line), fp);
        printf("%s",line);
    } while ((strcmp(line,temp)));
    printf("\n");
}