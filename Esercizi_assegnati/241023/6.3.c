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