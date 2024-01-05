#include <stdio.h>
#include <stdlib.h>

void create(char *s1, char *s2, int a, int b) {
    char *s=s1;
    for (int i=0;(i<a && *s);i++,s++,s1++);
    s-=2;
    s1--;
    if (!(*s)) return;
    for (int i=0;(i<=b);i++,s++) if (!(*s)) return;
    for (;*s1;s1++,s2++) *s2=*s1;
}

int main(int argc, char *argv[]) {
    if (argc!=4) printf("Uso: <parola> <int 1> <int 2>\n");
    else {
        char s[50]="";
        create(argv[1],s,atoi(argv[2]),atoi(argv[3]));
        printf("%s\n",s);
    }
}