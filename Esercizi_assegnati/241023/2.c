#include <stdio.h>

int main(void) {
    int n=0, count=1;
    float i=0, media=0;
    printf("Inserisci il voto del 1° studente: ");
    scanf("%d",&n);
    while (n!=-1) {
        if ((n>0) && (n<5)) {
            i++;
            media+=n;
        }
        else if ((n!=-1) && (n!=0)) {
            printf("Voto non corretto, riprovare\n");
            count--;
        }
        printf("Inserisci il voto del %d° studente: ",++count);
        scanf("%d",&n);
    }
    if (i>1) printf("Media: %f\nNumero di studenti passati: %1.f\n",(media/i),i);
    else printf("Media nulla\n");
}