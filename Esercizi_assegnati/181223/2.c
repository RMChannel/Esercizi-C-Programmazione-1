#include<stdio.h>
#include <stdlib.h>
#define NOME_FILE "a.txt"

int main(void) {
FILE *fp;
if ( (fp=fopen(NOME_FILE, "r"))  == NULL  ) {
      
        fprintf(stderr, "Non posso aprire il file %s\n", NOME_FILE);
        exit(EXIT_FAILURE);
    }
int fg, fm, fa;
float importo;
char causale[100]="", line[1000]="";
fgets(line, sizeof(line), fp);
sscanf(line, "%d-%d-%d;%[^;];%f", &fg, &fm, &fa, causale, &importo);
printf("%d %d %d %s %f",fg,fm,fa,causale,importo);
}