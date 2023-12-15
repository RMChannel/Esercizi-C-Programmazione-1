#include <stdio.h>

int are_anagrams(const char *s, const char *t) {
    int snumber[26]={0};
    int tnumber[26]={0};
    for (;*s;s++) snumber[(*s-'a')]++;
    for (;*t;t++) tnumber[(*t-'a')]++;
    for (int i=0;i<26;i++) if (snumber[i]!=tnumber[i]) return 0;
    return 1;
}

int main(int argc, char* argv[]) {
    if (argc!=3) {
        printf("Questo programma richiede solo 2 argomenti\n");
        return 1;
    }
    char *s=argv[1];
    char *t=argv[2];
    printf("%s ",s);
    if (!(are_anagrams(s,t))) printf("non ");
    printf("e' anagramma di %s\n",t);
    return 0;
}