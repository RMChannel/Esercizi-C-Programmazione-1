#include <stdio.h>

int main(void) {
    int nday, nweek, temp;
    printf("Inserisci quanti giorni ha il mese: ");
    scanf("%d",&nday);
    printf("Inserisci per quale giorno inizia il mese (1=Lun, 7=Dom): ");
    scanf("%d",&nweek);
    temp=nweek;
    nweek--;
    printf(" L  M  M  G  V  S  D\n");
    for (;temp>1;temp--) printf("   ");
    for (int i=1;i<=nday;i++,nweek++) {
        if (nweek%7==0) printf("\n");
        if (i<10) printf(" ");
        printf("%d ",i);
    }
    printf("\n");
}