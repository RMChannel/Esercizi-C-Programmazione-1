#include <stdio.h>

int main(void) {
    int n, result=0, firstinput=1, i=0, base;
    printf("Inserisci il numero da convertire: ");
    scanf("%d",&n);
    printf("Inserisci la base in cui convertire il numero (valido da 2 a 9): ");
    scanf("%d",&base);
    for (;n>0;n/=base) {
        if (n%base>0) firstinput=0;
        if (firstinput) i++;
        result=(result*10)+(n%base);
    }
    for (;result>0;result/=10) printf("%d",result%10);
    for (;i>0;i--) printf("0");
    printf("\n");
}