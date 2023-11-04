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