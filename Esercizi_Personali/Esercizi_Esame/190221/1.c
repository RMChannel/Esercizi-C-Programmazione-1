#include <stdio.h>
#include <stdlib.h>

int mystrlen(char *s) {
    int n=0;
    for (;*s;s++,n++);
    return n;
}

char *scarto(char *s, char *t) {
    int scarto=0;
    char *s1=s;
    char *t1=t;
    if (mystrlen(s)>mystrlen(t)) {
        for (;(*t);t++,s++) {
            if (*s!=*t) {
                scarto++;
                s++;
            }
            if (scarto>1) return "";
        }
        return t1;
    }
    else if (mystrlen(s)==mystrlen(t)) return "";
    else {
        for (;(*s);s++,t++) {
            if (*t!=*s) {
                scarto++;
                t++;
            }
            if (scarto>1) return "";
        }
        return s1;
    }
}

int main(int argc, char *argv[]) {
    if (argc!=3) printf("Uso corretto: <parola 1> <parola 2>\n");
    else printf("%s\n",scarto(argv[1],argv[2]));
}