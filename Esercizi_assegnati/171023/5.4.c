#include <stdio.h>

int main(void) {
    int w;
    printf("Inserisci la potenza del vento: ");
    scanf("%d",&w);
    if (w<1) printf("Calm\n");
    else if (w<=3) printf("Light air\n");
    else if (w<=27) printf("Breeze\n");
    else if (w<=47) printf("Gale\n");
    else if (w<=63) printf("Storm\n");
    else printf("Hurricane\n");
}