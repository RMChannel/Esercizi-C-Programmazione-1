#include <stdio.h>

int main(void) {
    int back=0, first=0, second=0;
    for (int i=0;i<10;i++) {
        printf("Inserisci il tiro del 1 dado e del %d tiro: ",(i+1));
        scanf("%d",&first);
        printf("Inserisci il tiro del 2 dado e del %d tiro: ",(i+1));
        scanf("%d",&second);
        first+=second;
        if (first==back) {
            printf("Hai vinto!\n");
            return 0;
        }
        back=first;
    }
    printf("Hai perso\n");
}