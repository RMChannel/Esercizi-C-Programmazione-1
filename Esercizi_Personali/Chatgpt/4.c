#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FALSE 0
#define TRUE 1

int main(int argc, char *argv[]) {
    FILE *fp;
    if ((fp=fopen("text.txt","r"))==NULL) {
        printf("File non trovato\n");
        exit(EXIT_FAILURE);
    }
    long int n=0;
    char line[10000]="";
    while (fgets(line,sizeof(line),fp)) {
        int flag=TRUE;
        for (char *s=line;*s!='\n' && *s;s++) {
            if (*s!=' ' && flag) {
                n++;
                flag=FALSE;
            }
            else if (*s==' ' && !flag) flag=TRUE;
        }
    }
    printf("Numero parole: %d\n",n);
}