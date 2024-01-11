#include <stdio.h>

int mystrlen(char *s) {
    int n=0;
    for (;*s;s++,n++);
    return n;
}

int strsubend(char *s, char *t, char *r) {
    char *s1=s;
    char *t1=t;
    if (mystrlen(t)!=mystrlen(r)) return 0;
    for (;(*s && *t);s++) {
        if (*s==*t) t++;
        else if (t!=t1) t=t1;
    }
    if (!(*t)) {
        for (;(*s==*t && s1!=s);s--,t--);
        if (s1!=s) s++;
        for (;*s;s++,r++) *s=*r;
        return 1;
    }
    return 0;
}

int main(int argc, void *argv[]) {
    if (argc!=4) printf("Uso scorretto del programma rilevato, uso corretto:\n./strsubend <parola 1> <parola 2> <parola 3>\n");
    else if (strsubend(argv[1],argv[2],argv[3])) printf("%s\n",argv[1]);
}