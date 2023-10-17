#include <stdio.h>

int main(void) {
    int n1,n2,n3,n4,min,max, min2, max2;
    printf("Inserisci 4 numeri interi: ");
    scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
    min=n1;
    max=n1;
    min2=n3;
    max2=n3;
    if (n2<min) min=n2;
    else max=n2;
    if (n4<n3) min2=n4;
    else max2=n4;
    if (min2<min) min=min2;
    if (max2>max) max=max2;
    printf("Minimo: %d\nMassimo: %d\n",min,max);
}