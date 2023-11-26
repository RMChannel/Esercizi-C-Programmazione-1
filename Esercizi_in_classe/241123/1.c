#include <stdio.h>
#include <math.h>

int mersenne(long unsigned int n) {
    long unsigned int temp=2;
    long unsigned int n2=sqrt(n);
    if (n<2) return 0;
    while (1) {
        temp*=2;
        if ((temp-1)==n) break;
        else if (temp>=n) return 0;
    }
    for (long unsigned int i=3;i<=n2;i+=2) if ((n%i)==0) return 0;
    return 1;
}

int main(void) {
    unsigned long int n;
    printf("Inserisci un numero: ");
    scanf("%ld",&n);
    printf("%ld",mersenne(n));
}