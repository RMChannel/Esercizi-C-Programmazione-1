#include <stdio.h>
#define N 100
#define TRUE 1
#define FALSE 0

int read_line(char str[],int n) {
    int i=0;
    printf("Inserisci il messaggio: ");
    do {
        char ch;
        int control=FALSE;
        while ((ch=getchar())==' ') control=TRUE;
        if (control) str[i++]=' ';
        str[i]=ch;
        i++;
    } while (i<100 && str[i-1]!='\n');
}


int main(void) {
    char s[N];
    for (int i=0;i<N;i++) s[i]='\0';
    int legnth=read_line(s,N);
    printf("Stringa senza spazi in eccesso: ");
    for (int i=0;(s[i]!='\n');i++) printf("%c",s[i]);
}