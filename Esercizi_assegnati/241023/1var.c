#include <stdio.h>

int main(void) {
    int n=0, temp=0, i=1;
    printf("Inserisci il 1°voto: ");
    scanf("%d",&temp);
    while (temp!=-1) {
        n+=temp;
        printf("Inserisci il %d° voto: ",++i);
        scanf("%d",&temp);
        if ((temp<-1) || (temp>100)) {
            printf("Valutazione non corretta, riprovare\n");
            temp=0;
            i--;
        }
    }
    if (n==0) printf("Nessun voto inserito\n");
    else if (((float)(n/i))>=60) printf("Classe valida\n");
    else printf("Classe non valida\n");
}