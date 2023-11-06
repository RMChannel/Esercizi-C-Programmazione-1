#include <stdio.h>

int main(void) {
    char a;
    while (1) {
        int count=0;
        printf("Inserisci una frase: ");
        a=getchar();
        for (;a!='\n';a=getchar()) if ((a=='a') || (a=='A') || (a=='e') || (a=='E') || (a=='i') || (a=='I') || (a=='o') || (a=='O') || (a=='u') || (a=='U')) count++;
        printf("Numero di vocali: %d\nVuoi ripetere il programma?\n[S]Sì\n[Altro]No\n", count);
        a=getchar();
        if ((a!='S') && (a!='s')) break;
        while (a!='\n') a=getchar();
    }
}