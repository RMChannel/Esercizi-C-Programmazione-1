#include <stdio.h>

void cernita(const char *s, const char *t) {
    int alphabet[26]={0};
    for (;*s;s++) alphabet[(*s-'a')]=1;
    for (;*t;t++) alphabet[(*t-'a')]++;
    for (int i=0;i<26;i++) if (alphabet[i]>1) printf("%c",(i+'a'));
}

int main(int argc, char* argv[]) {
    if (argc!=3) {
        printf("Questo programma richiede solo 2 argomenti\n");
        return 1;
    }
    char *s=argv[1];
    char *t=argv[2];
    cernita(s,t);
    return 0;
}