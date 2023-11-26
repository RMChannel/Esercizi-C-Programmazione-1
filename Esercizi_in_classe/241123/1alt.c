#include <stdio.h>
#include <math.h>

int mersenne(unsigned long int n) {
    unsigned long int temp=2;
    unsigned long int n2=sqrt(n);
    if (n<2) return 0;
    while (1) {
        temp*=2;
        if ((temp-1)==n) break;
        else if (temp>=n) return 0;
    }
    for (unsigned long int i=3;i<=n2;i+=2) if ((n%i)==0) return 0;
    return 1;
}

int main(void) {
    unsigned long int n;
    printf("Inserisci un numero: ");
    scanf("%ld",&n);
    for (unsigned long int i=1;i<=n;i++) {
        if (mersenne(i)) printf("%ld\n",i);
    }
}

/*
Questa è versione alternativa che sfrutta la funzione mersenne creata per l'esercizio precedente
per trovare tutti i numeri di mersenne minori o uguali all'input dato
*/