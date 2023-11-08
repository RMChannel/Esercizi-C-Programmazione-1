#include <stdio.h>

int main(void) {
    int n1,n2,i=1,min,gcd=1;
    printf("Inserisci due numeri:\n[1]: ");
    scanf("%d",&n1);
    printf("[2]: ");
    scanf("%d",&n2);
    if (n1<n2) min=n1;
    else min=n2;
    while (i<=min) {
        if (((n1%i)==0) && ((n2%i)==0)) gcd=i;
        i++;
    }
    printf("GCD: %d\n",gcd);
}

/*
Questo codice sfrutta un metodo alternativo rispetto a quello proposto dal libro.
Il mio codice individua il numero più piccolo tra i 2 e viene salvato in min, una
volta fatto ciò si avvia un ciclo while con un indice i che parte da 1, il cilo 
assegna i a gcd nel caso in cui sia n1 sia n2 sono divisibili per i (quindi hanno resto 0).
Il ciclo continua finché i non è uguale a min, facendo così testiamo ogni numero fino al numero più
piccolo tra i 2, così da trovare tutti i casi possibili di divisori comuni.
*/