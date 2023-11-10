#include <stdio.h>
#define N 10

int main(void) {
    int numeri[N]={0}, somma=0, max, min, crescente=1, decrescente=1, pari=0, dispari=0;
    for (int i=0;i<N;i++) {
        printf("Insersici il %d numero: ",(i+1));
        scanf("%d",&numeri[i]);
    }
    min=max=numeri[0];
    for (int i=0;i<N;i++) {
        somma+=numeri[i];
        if (numeri[i]>max) max=numeri[i];
        if (numeri[i]<min) min=numeri[i];
        if ((numeri[i]>=numeri[(i+1)]) && (crescente) && ((i+1)<N)) crescente=0;
        if ((numeri[i]<=numeri[(i+1)]) && (decrescente)&& ((i+1)<N)) decrescente=0;
        if ((numeri[i]%2)==0) pari++;
        else dispari++;
    }
    printf("Somma=%d\nMax=%d\nMin=%d\nNumeri pari=%d\nNumeri dispari=%d\n",somma,max,min,pari,dispari);
    if (crescente) printf("La funzione e' crescente\n");
    else printf("La funzione non e' crescente\n");
    if (decrescente) printf("La funzione e' decrescente\n");
    else printf("La funzione non e' decrescente\n");
}