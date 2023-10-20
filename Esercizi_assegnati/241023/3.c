#include <stdio.h>

int main(void) {
    int n;
    float media=0.00f, i=0.00f;
    while (n>=0) {
        printf("Inserisci il %1.f° numero: ",++i);
        scanf("%d",&n);
        if (n>=0) media+=n;
    }
    i--;
    printf("Media= %f\n",(media/i));
}