#include <stdio.h>

int main(void) {
    while (1) {
        int n, result=1, a=1, b=1;
        printf("Inserisci un numero: ");
        scanf("%d",&n);
        if (n<=0) {
            printf("Numero non valido\n");
            continue;
        }
        else {
            for (int i=2;i<n;i++) {
                int temp=b;
                b=a+b;
                a=temp;
            }
        }
        printf("Fib(%d)=%d\nVuoi ripetere il programma?\n[1]Si\n[Altro]No\n",n,b);
        scanf("%d",&n);
        if (n!=1) break;
    }
}