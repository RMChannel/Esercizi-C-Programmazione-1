#include <stdio.h>

int main(void) {
    int i=0, n1, n2, max=0, imax=0;
    char scelta;
    while (1) {
        printf("Inserisci il 1 dado del %d lancio: ", (i+1));
        scanf("%d",&n1);
        printf("Inserisci il 2 dado del %d lancio: ", (i+1));
        scanf("%d",&n2);
        getchar();
        if ((n1+n2)>max) {
            max=n1+n2;
            imax=i+1;
        }
        i++;
        printf("Il tiro col punteggio piu' alto e' il %d\nPunteggio massimo: %d\nVuoi terminare il programma?\n[S]Si'\n[Altro]No\n",imax,max);
        scelta=getchar();
        if (scelta=='S' || scelta=='s') return 0;
        else while ((scelta=getchar())!='\n');
    }
}