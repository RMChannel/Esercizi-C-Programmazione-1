#include <stdio.h>

int main(void) {
    int n, i = 0;
    printf("Inserisci un numero positivo:\n");
    scanf("%d",&n);
    while (n>1) {
        n=n/10;
        i+=1;
    }
    printf("Questo numero è formato da questo numero di cifre: %d\n", i);
}