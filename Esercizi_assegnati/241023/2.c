#include <stdio.h>

int main(void) {
    int n=0, count=0;
    float i=0, media=0;
    while (n!=-1) {
        printf("Inserisci il voto del %d° studente: ",++count);
        scanf("%d",&n);
        if ((n>0) && (n<5)) {
            i++;
            media+=n;
        }
        else if (n!=-1) {
            printf("Voto non corretto, riprovare\n");
            count--;
        }
    }
    if (i>0) printf("Media: %f\nNumero di studenti passati: %1.f\n",(media/i),i);
    else printf("Media nulla");
}