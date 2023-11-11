#include <stdio.h>

int main(void) {
    char a, nome;
    while (1) {
        char cognome[30]={'\n'};
        printf("Inserisci Nome e Cognome: ");
        scanf(" %c",&a);
        nome=a;
        while (a!=' ') a=getchar();
        while (a==' ') a=getchar();
        for (int i=0;a!='\n';a=getchar(),i++) cognome[i]=a;
        for (int i=0;cognome[i]!='\n';i++) printf("%c",cognome[i]);
        printf(", %c.\nVuoi ripetere il programma?\n[S]Si'\n[N]No\n",nome);
        a=getchar();
        if ((a!='s') && (a!='S')) break;
        while (getchar()!='\n');
    }
}