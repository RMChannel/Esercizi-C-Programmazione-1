#include <stdio.h>

int main(void) {
    char a, cognome;
    while (1) {
        printf("Inserisci Cognome e Nome: ");
        a=getchar();
        while (a=='\n' && a==' ') a=getchar();
        cognome=a;
        while (a!=' ') a=getchar();
        while (a==' ') a=getchar();
        for (;a!='\n';a=getchar()) printf("%c",a);
        printf(", %c\nVuoi ripetere il programma?\n[S]Sì\n[N]No\n",cognome);
        a=getchar();
        if ((a!='s') && (a!='S')) break;
        while (getchar()!='\n');
    }
}