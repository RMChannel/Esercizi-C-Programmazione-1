#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool a[100]={false};
    int n, b = 0;
    printf("Inserisci un numero positivo:\n");
    scanf("%d",&n);
    while (n>0) {
        b=n%10;
        if (a[b]) {
            break;
        }
        a[b]=true;
        n=n/10;
    }
    if (n>0) {printf("Il numero ha cifre ripetute\n");}
    else {printf("Il numero non ha cifre ripetute\n");}
}