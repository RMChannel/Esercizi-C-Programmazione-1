#include <stdio.h>

int main(void) {
    while (1) {
        int n, scelta;
        printf("Inserisci un numero: ");
        scanf("%d",&n);
        printf("%d Carte da 20\n",(n/20));
        n=n%20;
        printf("%d Carte da 10\n", (n/10));
        n=n%10;
        printf("%d Carte da 5\n", (n/5));
        n=n%5;
        printf("%d Monete da 1\nVuoi continuare il programma?\n[0]Sì\n[Altro]No\b",(n/1));
        scanf("%d",&scelta);
        if (scelta) break;
    }
}