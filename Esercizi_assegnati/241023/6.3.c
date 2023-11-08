#include <stdio.h>

int main(void) {
    int n1,n2,i=2,min,gcd,n1n=0,n2n=0;
    printf("Inserisci una frazione: ");
    scanf("%d/%d",&n1,&n2);
    if (n1<0) {
        n1n=1;
        n1*=-1;
        }
    if (n2<0) {
        n2n=1;
        n2*=-1;
        }
    do {
        gcd=1;
        if (n1<n2) min=n1;
        else min=n2;
        while (i<=min) {
            if (((n1%i)==0) && ((n2%i)==0)) gcd=i;
            i++;
        }
        n1/=gcd;
        n2/=gcd;
    } while (gcd>1);
    if ((n1n) && (n2n));
    else {
        if (n1n) n1*=-1;
        if (n2n) n2*=-1;
    }
    printf("%d/%d\n",n1,n2);
}

/*
Questo codice sfrutta lo stesso metodo utilizzato nell'esercizio 6.2.c
Per gestire i negativi, vado prima di tutto a controllare se n1 o n2 lo sono,
se lo sono allora una variabile di controllo chiamata n1n/n2n (inizializzate a 0)
viene impostato a 1 e n1/n2 viene trasformato in positivo.

Dopo aver semplificato i due numeri dividendoli per tutti i gcd trovati finché esso è maggiore di 1,
andiamo a controllare le variabili di controllo, se sono uguali a 1 tutte e due allora non faccio niente
(perché un numero negativo fratto un altro numero negativo, diventa positivo), oppure nel caso n1n o n2n sono 1
i numeri vengono riportati a negativo.
*/