#include <stdio.h>

int main(void) {
    while (1) {
        int count[10]={0};
        long int n;
        char scelta;
        printf("Inserisci un numero: ");
        scanf("%ld",&n);
        printf("%ld\n",n);
        getchar();
        if (n<0) n*=-1;
        do {
            int temp=n%10;
            n/=10;
            count[temp]++;
        } while (n!=0);
        for (int i=0;i<10;i++) {
            if (count[i]==1) printf("Il numero %d compare 1 volta\n",i);
            else if (count[i]>0) printf("Il numero %d compare %d volte\n", i, count[i]);
        }
        printf("Vuoi terminare il programma?\n[S]Si\n[Altro]No\n");
        scelta=getchar();
        if (scelta=='S' || scelta=='s') return 0;
    }
}