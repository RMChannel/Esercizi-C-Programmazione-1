#include <stdio.h>

int main(void) {
    int n=0;
    int i=2;
    printf("Inserisci un numero positivo\n");
    scanf("%d",&n);
    while (i<n) {
        if (n%i==0) {
            printf("Il numero non è primo\n");
            return 0;
        }
        i+=1;
    }
    printf("Il numero è primo\n");
    return 0;
}