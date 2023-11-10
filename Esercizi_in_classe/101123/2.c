#include <stdio.h>
#define N 4

int main(void) {
    int numeri[N]={0}, somma=0, max, min, pari=0, dispari=0, i=0, i2=0, i3;
    for (i3=0;i3<4;i3++) {
        int temp;
        printf("Insersici il %d numero: ",(i3+1));
        scanf("%d",&temp);
        if (temp!=0) numeri[i3]=temp;
        else break;
    }
    if (i3==0) {
        printf("Nessun numero inserito\n");
        return 0;
    }
    min=max=numeri[0];
    for (int i=0;i<i3;i++) {
        somma+=numeri[i];
        if (numeri[i]>max) max=numeri[i];
        if (numeri[i]<min) min=numeri[i];
        if ((numeri[i]%2)==0) pari++;
        else dispari++;
    }
    for (i=0;i<i3;i++) if (numeri[i]>=numeri[(i+1)]) break;
    for (i2=0;i2<i3;i2++) if (numeri[i2]<=numeri[(i2+1)]) break;
    printf("Somma=%d\nMax=%d\nMin=%d\nNumeri pari=%d\nNumeri dispari=%d\n",somma,max,min,pari,dispari);
     if (i==i3) printf("La funzione e' crescente\n");
    else printf("La funzione non e' crescente\n");
    if (i2==i3) printf("La funzione e' decrescente\n");
    else printf("La funzione non e' decrescente\n");
}