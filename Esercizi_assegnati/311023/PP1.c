#include <stdio.h>

int main(void) {
    int n, result=0, firstinput=1, i=0;
    printf("Inserisci il numero da convertire: ");
    scanf("%d",&n);
    for (;n>0;n/=2) {
        if (n%2==1) firstinput=0;
        if (firstinput) i++;
        result=(result*10)+(n%2);
    }
    for (;result>0;result/=10) printf("%d",result%10);
    for (;i>0;i--) printf("0");
    printf("\n");
}