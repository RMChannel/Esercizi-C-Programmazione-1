#include <stdio.h>

int main(void) {
    int n,i;
    printf("Inserisci un numero di massimo 4 cifre: ");
    scanf("%d",&n);
    if (n<10) i=1;
    else if ((n>=10) && (n<100)) i=2;
    else if ((n>=100) && (n<1000)) i=3;
    else if ((n>=1000) && (n<9999)) i=4;
    else i=0;
    if (i>0) printf("Il numero ha %d cifre\n",i);
    else printf("Cifra troppo grande\n");
}