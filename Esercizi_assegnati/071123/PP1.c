#include <stdio.h>

int main(void) {
    while (1) {
        char c;
        printf("Inserisci una parola: ");
        scanf("%c",&c);
        while(c!='\n') {
            if (c=='a') c='z';
            else if (c=='A') c='Z';
            else if ((c>'a' && c<='z') || (c>'A' && c<='Z')) c--;
            printf("%c",c);
            scanf("%c",&c);
        }
        printf("\nVuoi ripetere il programma?\n[S]Sì\n[N]No\n");
        scanf("%c",&c);
        if ((c!=83) && (c!=115)) break;
        scanf("%c",&c);
    }
}