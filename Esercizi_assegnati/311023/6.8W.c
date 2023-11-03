#include <stdio.h>

int main(void) {
    while (1) {
        int nday, nweek, temp;
        printf("Inserisci quanti giorni ha il mese: ");
        scanf("%d",&nday);
        if ((nday<28) || (nday>31)) {
            printf("Numero di giorni non corretto, riprovare\n");
            continue;
        }
        printf("Inserisci per quale giorno inizia il mese (1=Lun, 7=Dom): ");
        scanf("%d",&nweek);
        if ((nday<1) || (nday>7)) {
            printf("Numero di inizio settimana non corretto, riprovare\n");
            continue;
        }
        temp=nweek;
        nweek--;
        printf(" L  M  M  G  V  S  D\n");
        for (;temp>1;temp--) printf("   ");
        for (int i=1;i<=nday;i++,nweek++) {
            if (nweek%7==0) printf("\n");
            if (i<10) printf(" ");
            printf("%d ",i);
        }
        printf("\nVuoi ripetere il programma?\n[1]Si\n[Altro]No\n");
        scanf("%d",&temp);
        if (temp!=1) break;
    }
}