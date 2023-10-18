#include <stdio.h>

int main(void) {
    float m;
    printf("Inserisci le tue entrate: ");
    scanf("%f",&m);
    if (m<750.00f) m=m/100.00f;
    else if (m<2250.00f) m=7.50f+((m/100.00f)*2.00f);
    else if (m<3750.00f) m=37.50f+((m/100.00f)*3.00f);
    else if (m<5250.00f) m=82.50f+((m/100.00f)*4.00f);
    else if (m<7000.00f) m=142.50f+((m/100.00f)*5.00f);
    else m=230.00f+((m/100.00f)*6.00f);
    printf("Le tasse che devi pagare sono %.2f$\n",m);
}