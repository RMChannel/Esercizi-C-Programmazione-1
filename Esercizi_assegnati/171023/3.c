#include <stdio.h>

int main(void) {
    int e;
    float p;
    printf("Inserisci la tua età: ");
    scanf("%d",&e);
    if (e<0) {
        printf("Età non corretta, riprovare\n");
        return 0;
    }
    else if ((e>6) && (e<16)) {
         printf("Inserisci il tuo peso: ");
        scanf("%f",&p);
    }
    printf("Prezzo: ");
    if (e<6) printf("Gratis\n");
    else if ((e>6) && (e<16)) printf("%.2f€\n",(0.1*p));
    else if ((e>=16) && (e<=60)) printf("10.50€\n");
    else printf("6.50€\n");
}