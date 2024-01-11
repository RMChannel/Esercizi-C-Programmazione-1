#include <stdio.h>
#include <stdlib.h>
#define FALSE 0
#define TRUE 1

void acronimo(char *s, char *z) {
    int flag=TRUE;
    while (*s) {
        if (*s!=' ' && flag) {
            *z=*s;
            z++;
            flag=FALSE;
        }
        else if (*s==' ' && !flag) flag=TRUE;
        s++;
    }
}

int main(int argc, char *argv[]) {
    if (argc!=2) printf("Uso: ./a.out <frase>\n");
    else {
        char z[100]="";
        acronimo(argv[1],z);
        printf("%s\n",z);
    }
}

/*
Questo programma prende in input la stringa da linea di comando (dando errore nel caso fosse assente)
inizia impostando una variabile flag a TRUE (la variabile rappresenta se è stata già trovata la prima lettera della parola o meno)
appena il programma trova una lettera e flag è vera, la lettera viene salvata in z e dopodiché flag viene impostata a FALSE (così da segnalare che la 1°lettera è stata salvata),
quando si ritrova uno spazio e flag è falsa, flag viene reimpostata a vera e si ripete il ciclo finché *s non diventa \0
*/