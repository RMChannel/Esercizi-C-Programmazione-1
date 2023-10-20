#include <stdio.h>

int main(void) {
    int n=0, i=0, temp;
    while (i<10) {
        printf("Inserisci il %d° voto: ",++i);
        scanf("%d",&temp);
        n+=temp;
    }
    if ((n/10)>=60) printf("Classe valida\n");
    else printf("Classe non valida\n");
}