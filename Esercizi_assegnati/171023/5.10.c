#include <stdio.h>

int main(void) {
    int n;
    printf("Inserisci il voto: ");
    scanf("%d",&n);
    n=n/10;
    if ((n>100) || (n<0)) printf("Voto errato\n");
    else {
        printf("Voto letterale: ");
        switch(n) {
            case 10: case 9:
                printf("A\n");
                break;
            case 8:
                printf("B\n");
                break;
            case 7:
                printf("C\n");
                break;
            case 6:
                printf("D\n");
                break;
            case 5: case 4: case 3: case 2: case 1: case 0:
                printf("F\n");
                break;
        }
    }
}