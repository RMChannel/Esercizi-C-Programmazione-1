#include <stdio.h>

void fusione(char *s, char *t, char *z) {
    char *s1=s;
    for (char *t1=t;(*t1 && *s1);t1++) if (*t1==*s1) s1++;
    if (*s1) return;
    for (;(*t);t++) {
        while (*t==' ') t++;
        while (*s==' ') s++;
        if (*t!=*s) {
            *z=*t;
            z++;
        }
        else s++;
    }
}

int main(int argc, char *argv[]) {
    char z[100]="";
    if (argc!=3) printf("Numero di argomenti non corretto\nUso corretto: ./fusion <1°parola> <2°parola>\n");
    else fusione(argv[1],argv[2],z);
    printf("%s\n",z);
}