#include <stdio.h>

int main(void) {
    char a, nome;
    while (1) {
        printf("Inserisci Nome e Cognome: ");
        scanf(" %c",&a);
        nome=a;
        while (a!=' ') a=getchar();
        while (a==' ') a=getchar();
        for (;a!='\n';a=getchar()) printf("%c",a);
        printf(", %c.\nVuoi ripetere il programma?\n[S]Si'\n[N]No\n",nome);
        a=getchar();
        if ((a!='s') && (a!='S')) break;
        while (getchar()!='\n');
    }
}