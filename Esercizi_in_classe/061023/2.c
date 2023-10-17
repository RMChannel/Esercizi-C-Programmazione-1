#include <stdio.h>

int main(void) {
    int a;
    printf("Inserisci un numero intero a 2 cifre: ");
    scanf("%2d",&a);
    a=(a/10)+(a%10*10);
    printf("%.2d\n",a);
}