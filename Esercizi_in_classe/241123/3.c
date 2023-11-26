#include <stdio.h>

#define N 30

void array_Fibonacci(unsigned long int *c,unsigned long int *n) {
    unsigned long int a=1,b=0;
    for (int i=1;i<*n;i++) {
        c[(i-1)]=b;
        unsigned long int temp=b;
        b=a+b;
        a=temp;
    }
    *n=2;
}

int main(void) {
    unsigned long int a[N];
    unsigned long int n=N;
    array_Fibonacci(a,&n);
    for (unsigned long int i=n;i<(N-1);i++) printf("%ld ",a[i]);
}