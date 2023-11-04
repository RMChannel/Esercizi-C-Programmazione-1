#include <stdio.h>

int main(void) {
    int n;
    float media=0.00f, i=1.00f;
    printf("Inserisci il 1° numero: ");
    scanf("%d",&n);
    while (n>=0) {
        if (n>=0) media+=n;
        else i--;
        printf("Media= %f\n",(media/i));
        printf("Inserisci il %1.f° numero: ",++i);
        scanf("%d",&n);
    }
    if ((media==0) && (i==1)) printf("Media non calcolata\n");
}