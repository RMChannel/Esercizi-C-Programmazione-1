#include <stdio.h>
#include <stdlib.h>

int mystrlen(char *s) {
    int n=0;
    for (;*s;s++,n++);
    return n;
}

int metatesi(char *s, char *t) {
    if (mystrlen(s)==1 || (mystrlen(s)!=mystrlen(t))) return 0;
    for (;*s==*t;s++,t++);
    if (!(*t)) return 0;
    t++;
    if (*s==*t) {
        s+=2;
        t++;
        for (;(*s==*t && *s && *t);s++,t++);
        if (!(*t)) return 1;
    }
    return 0;
}

int main(int argc, char *argv[]) {
    if (argc!=3) printf("Uso corretto: ./a.exe <parola 1> <parola 2>\n");
    else printf("%d\n",metatesi(argv[1],argv[2]));
    return 0;
}