#include <stdio.h>

int main(void) {
    int n, result=1, a=1, b=1;
    printf("Inserisci un numero: ");
    scanf("%d",&n);
    if (n<=0) printf("Numero non valido\n");
    else {
        for (int i=2;i<n;i++) {
            int temp=b;
            b=a+b;
            a=temp;
        }
    }
    printf("Fib(%d)=%d\n",n,b);
}