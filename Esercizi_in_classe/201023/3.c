#include <stdio.h>

int main(void) {
    int n, somma, min, max, i=1;
    float media;
    printf("Inserisci il 1° numero: ");
    scanf("%d",&n);
    max=min=media=somma=n;
    if (n==0) printf("Niente da calcolare\n");
    else {
        while (n!=0) {
            printf("Inserisci il %d° numero: ", ++i);
            scanf("%d",&n);
            if (n>max) max=n;
            else if ((n<min) && (n!=0)) min=n;
            somma+=n;
            media+=n;
        }
        printf("Somma: %d\nMedia: %f\nMax: %d\nMin: %d\n",somma,(media/--i),max,min);
    }
}