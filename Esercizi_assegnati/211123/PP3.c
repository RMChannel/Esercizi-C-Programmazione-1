#include <stdio.h>

int main(void) {
    int red, blu, score=0, i;
    for (i=0;i<10;i++) {
        printf("Lancia il dado rosso: ");
        scanf("%d",&red);
        printf("Lancia il dado blu: ");
        scanf("%d",&blu);
        if ((red%2==0) && (red==blu)) score+=1;
        else if ((red%2!=0) && (blu%2!=0)) score+=1;
        if (red==6 && blu==6) break;
    }
    if (i<10) i++;
    printf("Il punteggio ottenuto e': %d\nNumero di tiri totali: %d\n",score,i);
}