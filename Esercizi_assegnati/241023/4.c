#include <stdio.h>

int main(void) {
    int n=0, p=0, d=0;
    while (n!=-1) {
        printf("Inserisci un numero: ");
        scanf("%d",&n);
        if ((n%2)==0) p++;
        else if (n!=-1) d++;
    }
    printf("Numeri pari: %d\nNumeri dispari: %d\n",p,d);
}