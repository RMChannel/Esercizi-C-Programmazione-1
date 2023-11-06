#include <stdio.h>

int main(void) {
    double n, max=0.0f;
    while (1) {
        char c;
        do {
            printf("Inserisci un numero: ");
            scanf("%lf",&n);
            getchar();
            if (n>max) max=n;
        } while (n>0);
        printf("Max= %lf\nVuoi terminare il programma?\n[S]Sì\n[Altro]No\n",max);
        c=getchar();
        if (c=='S' || c=='s') break;
    }
}