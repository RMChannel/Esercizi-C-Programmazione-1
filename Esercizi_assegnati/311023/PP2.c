#include <stdio.h>

int main(void) {
    while (1) {
        int n, result=0, firstinput=1, i=0, base;
        printf("Inserisci il numero da convertire: ");
        scanf("%d",&n);
        if (n<0) {
            printf("Numero non corretto, riprovare");
            continue;
        }
        printf("Inserisci la base in cui convertire il numero (valido da 2 a 9): ");
        scanf("%d",&base);
        if ((base<2) || (base>9)) {
            printf("Base non corretta, riprovare");
            continue;
        }
        for (;n>0;n/=base) {
            if (n%base>0) firstinput=0;
            if (firstinput) i++;
            result=(result*10)+(n%base);
        }
        for (;result>0;result/=10) printf("%d",result%10);
        for (;i>0;i--) printf("0");
        printf("\nVuoi ripetere il programma?\n[1]Si\n[Altro]No\n");
        scanf("%d",&i);
        if (i!=1) break;
    }
}