#include <stdio.h>

int main(void) {
    int a,b,c,d;
    printf("Inserisci due frazioni di numeri interi con al centro il simbolo +: ");
    scanf("%d/%d+%d/%d",&a,&b,&c,&d);
    a=(d*a)+(b*c);
    c=b*d;
    printf("La somma è uguale a: %d/%d\n",a,c);
}