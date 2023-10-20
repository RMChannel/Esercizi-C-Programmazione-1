#include <stdio.h>

int main(void) {
    int n;
    printf("Inserisci n: ");
    scanf("%d",&n);
    while (n>0) {
        printf("%d",n%10);
        n=n/10;
    }
    printf("\n");
}