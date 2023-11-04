#include <stdio.h>

int main(void) {
    int g,m,a;
    printf("Insrisci una data (mm/dd/yyyy): ");
    scanf("%2d/%2d/%4d",&g,&m,&a);
    printf("%d%.2d%.2d", a,m,g);
}