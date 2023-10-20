#include <stdio.h>

int main(void) {
    int n=0, temp=0;
    float i=0;
    while (temp!=-1) {
        n+=temp;
        printf("Inserisci il %1.f° voto: ",++i);
        scanf("%d",&temp);
    }
    if ((n/i)>=60) printf("Classe valida\n");
    else printf("Classe non valida\n");
}