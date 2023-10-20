#include <stdio.h>

int main(void) {
    int n1,n2,i=2;
    printf("Inserisci una frazione: ");
    scanf("%d/%d",&n1,&n2);
    while ((i<=n1) && (i<=n2)) {
        if (((n1%i)==0) && ((n2%i)==0)) {
            n1/=i;
            n2/=i;
            i=2;
        }
        else i++;
    }
    printf("%d/%d\n",n1,n2);
}