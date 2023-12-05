#include <stdio.h>
#define N 100

int main(void) {
    char frase[100], ch, *p, *termine;
    int i;
    printf("Inserisci una frase: ");
    for (i=0;((ch=getchar())!='\n');i++) frase[i]=ch;
    p=&frase[i-1];
    termine=&frase[0];
    for (;p>=termine;p--) printf("%c",*p);
}