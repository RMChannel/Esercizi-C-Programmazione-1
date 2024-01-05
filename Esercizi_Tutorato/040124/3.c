#include <stdio.h>

int bifronte(char *s, char *t) {
    for (;*t;t++);
    t-=2;
    for (;(*s==*t && *s);t--,s++);
    return (!(*s));
}

int main(int argc, char *argv[]) {
    if (argc!=3) printf("Uso scorretto del programma rilevato, uso corretto:\n./a.exe <parola 1> <parola 2>\n");
    else if (bifronte(argv[1],argv[2])) printf("%s e' bifronte di %s\n",argv[2],argv[1]);
    else printf("%s non e' bifronte di %s\n",argv[2],argv[1]);
}