#include <stdio.h>

int main(void) {
    int n;
    printf("Inserisci un numero: ");
    scanf("%d",&n);
    printf("%d Carte da 20\n",(n/20));
    n=n%20;
    printf("%d Carte da 10\n", (n/10));
    n=n%10;
    printf("%d Carte da 5\n", (n/5));
    n=n%5;
    printf("%d Monete da 1\n",(n/1));
}