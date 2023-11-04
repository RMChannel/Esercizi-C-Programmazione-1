#include <stdio.h>

int main(void) {
    int n, p=0, d=0;
    printf("Inserisci un numero: ");
    scanf("%d",&n);
    while (n!=-1) {
        if (n<0) printf("Numero non corretto\n");
        else if ((n%2)==0) p++;
        else if (n!=-1) d++;
        printf("Inserisci un numero: ");
        scanf("%d",&n);
    }
    if ((n==-1) && (p==0) && (d==0)) printf("Nessun numero inserito\n");
    else printf("Numeri pari: %d\nNumeri dispari: %d\n",p,d);
}