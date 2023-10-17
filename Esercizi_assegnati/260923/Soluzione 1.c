#include <stdio.h>

int main(void) {
    int n, n1, n2 = 0;
    printf("Inserisci un numero di massimo 2 cifre:\n");
    scanf("%d",&n);
    if ((n>99) || (n<9)) {
        printf("Numero inserito non corretto");
        return 0;
    }
    n1=n/10;
    n2=n%10;
    n=(n2*10)+n1;
    printf("%d\n",n);
    return 0;
}