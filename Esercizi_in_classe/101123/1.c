#include <stdio.h>
#define N 10

int main(void) {
    int numeri[N]={0}, somma=0, max, min, pari=0, dispari=0, i=0, i2=0;
    for (int i=0;i<N;i++) {
        printf("Insersici il %d numero: ",(i+1));
        scanf("%d",&numeri[i]);
    }
    min=max=numeri[0];
    for (int i=0;i<N;i++) {
        somma+=numeri[i];
        if (numeri[i]>max) max=numeri[i];
        if (numeri[i]<min) min=numeri[i];
        if ((numeri[i]%2)==0) pari++;
        else dispari++;
    }
    for (i=0;i<(N-1);i++) if (numeri[i]>=numeri[(i+1)]) break;
    for (i2=0;i2<(N-1);i2++) if (numeri[i2]<=numeri[(i2+1)]) break;
    printf("Somma=%d\nMax=%d\nMin=%d\nNumeri pari=%d\nNumeri dispari=%d\n",somma,max,min,pari,dispari);
    if (i==(N-1)) printf("La funzione e' crescente\n");
    else printf("La funzione non e' crescente\n");
    if (i2==(N-1)) printf("La funzione e' decrescente\n");
    else printf("La funzione non e' decrescente\n");
}