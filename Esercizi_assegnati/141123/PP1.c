#include <stdio.h>

int main(void) {
    while (1) {
        int n1,n2,d1=0,d2=0;
        char scelta;
        printf("Inserisci il 1 numero: ");
        scanf("%d",&n1);
        if (n1<2) {
            printf("Numero non corretto, riprovare\n");
            continue;
        }
        printf("Inserisci il 2 numero: ");
        scanf("%d",&n2);
        if (n2<2) {
            printf("Numero non corretto, riprovare\n");
            continue;
        }
        getchar();
        for (int i=1; i<=(n1/2);i++) if (n1%i==0) d1+=i;
        for (int i=1; i<=(n2/2);i++) if (n2%i==0) d2+=i;
        if ((d1==n2) && (d2==n1)) printf("I due numeri sono amichevoli\n");
        else printf("I due numeri non sono amichevoli\n");
        printf("Vuoi terminare il programma?\n[S]Si\n[Altro]No\n");
        scelta=getchar();
        if (scelta=='s' || scelta=='S') return 0;
        else while (scelta!='\n') scelta=getchar();
    }
}