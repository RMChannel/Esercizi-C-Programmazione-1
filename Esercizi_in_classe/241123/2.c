#include <stdio.h>

void scambio_ordinato(int *x, int *y, int*z) {
    if (*x>*y) {
        int temp=*y;
        *y=*x;
        *x=temp;
    }
    if (*x>*z) {
        int temp=*z;
        *z=*x;
        *x=temp;
    }
    if (*z<*y) {
        int temp=*y;
        *y=*z;
        *z=temp;
    }
}

int main(void) {
    int x,y,z;
    printf("Inserisci x: ");
    scanf("%d",&x);
    printf("Inserisci y: ");
    scanf("%d",&y);
    printf("Inserisci z: ");
    scanf("%d",&z);
    scambio_ordinato(&x,&y,&z);
    printf("%d %d %d\n",x,y,z);
}