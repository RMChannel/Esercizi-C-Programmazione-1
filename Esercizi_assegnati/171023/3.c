#include <stdio.h>

int main(void) {
    int e;
    float p;
    printf("Inserisci la tua età: ");
    scanf("%d",&e);
    if ((e>6) && (e<16)) printf("Inserisci il tuo peso: ");
    else printf("Prezzo: ");

    if (e<6) printf("Gratis\n");
    else if ((e>6) && (e<16)) {
        scanf("%f",&p);
        printf("%.2f€\n",(0.1*p));
    }
    else if ((e>=16) && (e<=60)) printf("10.5€\n");
    else printf("6.5€\n");
}