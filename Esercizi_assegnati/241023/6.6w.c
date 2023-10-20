#include <stdio.h>

int main(void) {
    int n, i=2,temp=0;
    printf("Inserisci un numero: ");
    scanf("%d",&n);
    while (temp<n) {
        temp=i*i;
        if (temp>=n) printf("%d\n",n);
        else printf("%d\n",temp);
        i+=2;
    }
}