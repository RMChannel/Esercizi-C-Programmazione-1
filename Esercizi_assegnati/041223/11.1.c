#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) {
    *twenties=dollars/20;
    dollars%=20;
    *tens=dollars/10;
    dollars%=10;
    *fives=dollars/5;
    dollars%=5;
    *ones=dollars;
}

int main(void) {
    int n, twenties, tens, fives, ones;
    printf("Inserisci un numero: ");
    scanf("%d",&n);
    pay_amount(n, &twenties, &tens, &fives, &ones);
    printf("Carte da 20:%d\nCarte da 10:%d\nCarte da 5:%d\nCarte da 1:%d\n",twenties,tens,fives,ones);
}