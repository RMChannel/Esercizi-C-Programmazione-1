#include <stdio.h>

int aggianco_inverso(char *s, char *t, char *z) {
    char *sf=s;
    char *ti=t;
    char *zi=z;
    while (*sf) sf++;
    sf--;
    for (;*sf==*ti;sf--,ti++);
    for (;(s<=sf && *z==*s);s++,z++);
    if ((s-1)!=sf) return 0;
    else {
        for (;(*t && *z && *z==*ti);ti++,z++);
        return (!(*z));
    }
}

int main(int argc, char *argv[]) {
    if (argc!=4) {
        printf("Utilizzo: subreverse <1°parola> <2°parola> <3°parola>\n");
        return 0;
    }
    if (aggianco_inverso(argv[1],argv[2],argv[3])) printf("Si\n");
    else printf("No\n");
}