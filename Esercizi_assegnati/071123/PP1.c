#include <stdio.h>

int main(void) {
    while (1) {
        char c;
        printf("Inserisci una parola: ");
        scanf("%c",&c);
        while(c!='\n') {
            if (c==97) c=122;
            else if (c==65) c=90;
            else if ((c>65 && c<91) || (c>97 && c<123)) c--;
            printf("%c",c);
            scanf("%c",&c);
        }
        printf("\nVuoi ripetere il programma?\n[S]Sì\n[N]No\n");
        scanf("%c",&c);
        if ((c!=83) && (c!=115)) break;
        scanf("%c",&c);
    }
}