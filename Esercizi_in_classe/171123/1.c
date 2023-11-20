#include <stdio.h>

int Fib(int n) {
    int a=1,b=0;
    for (int i=1;i<n;i++) {
        int temp=b;
        b=a+b;
        a=temp;
    }
    return b;
}

int main() {
    int n;
    printf("Inserisci un numero: ");
    scanf("%d",&n);
    if (n<=0) printf("Numero non valido\n");
    else printf("Fib(%d)=%d\n",n,Fib(n));
}