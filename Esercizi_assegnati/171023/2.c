#include <stdio.h>

int main(void) {
    int y;
    printf("Inserisci l'anno: ");
    scanf("%d",&y);
    if (y<1600) printf("Anno non calcolabile");
    else {
        if ((((y%100)==0) && (y%400)==0) || (((y%4)==0))) printf("SI\n");
        else printf("NO\n");
    }
}