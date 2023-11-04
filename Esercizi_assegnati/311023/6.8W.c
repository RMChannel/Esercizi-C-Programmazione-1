#include <stdio.h>

int main(void) {
    while (1) {
        int nday, nweek, temp;
        char scelta='a';
        printf("Inserisci quanti giorni ha il mese: ");
        scanf("%d",&nday);
        if ((nday<28) || (nday>31)) {
            printf("Numero di giorni non corretto, riprovare\n");
            continue;
        }
        printf("Inserisci per quale giorno inizia il mese (1=Lun, 7=Dom): ");
        scanf("%d",&nweek);
        getchar();
        if ((nweek<1) || (nweek>7)) {
            printf("Numero di inizio settimana non corretto, riprovare\n");
            continue;
        }
        temp=nweek;
        nweek--;
        printf(" L  M  M  G  V  S  D\n");
        for (;temp>1;temp--) printf("   ");
        for (int i=1;i<=nday;i++,nweek++) {
            if ((nweek%7==0) && (nweek>0)) printf("\n");
            printf("%.2d ",i);
        }
        printf("\nVuoi ripetere il programma?\n[S]Si\n[Altro]No\n");
        scanf("%c",&scelta);
        if (scelta!='S' && scelta!='s') break;
    }
}