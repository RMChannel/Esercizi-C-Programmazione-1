#include <stdio.h>
#define INDEX 20

int main(void) {
    int n[INDEX], value;
    while (1) {
        int count=0;
        char scelta;
        for (int i=0;i<INDEX;i++) {
            printf("Inserisci il %d numero: ",(i+1));
            scanf("%d",&n[i]);
        }
        printf("Inserisci il valore da verificare: ");
        scanf("%d",&value);
        getchar();
        for (int i=0;i<INDEX;i++) if (n[i]<value) count++;
        printf("Il totale di numeri minori del valore preimpostato sono: %d\nVuoi terminare il programma?\n[S]Si\n[Altro]No\n",count);
        scelta=getchar();
        if (scelta=='S' || scelta=='s') return 0;
    }
}