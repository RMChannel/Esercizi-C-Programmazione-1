#include <stdio.h>

int strend(const char *s, const char *t) {
    int max;
    for (;*s;s++);
    s--;
    for (max=0;*t;t++) max++;
    t--;
    if (t>s) return 0;
    for (;(*s && max>0);s--,t--,max--) if (*s!=*t) return 0;
    return 1;
}

int main(int argc, char* argv[]) {
    if (argc!=3) {
        printf("Questo programma richiede solo 2 argomenti\n");
        return 1;
    }
    char *s=argv[1];
    char *t=argv[2];
    if (strend(s,t)) printf("Si, \"%s\" occorre alla fine di \"%s\"",t,s);
    else printf("No, \"%s\" non occorre alla fine di \"%s\"",t,s);
    return 0;
}