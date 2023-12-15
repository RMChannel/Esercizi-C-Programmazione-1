#include <stdio.h>

void subreverse(char *s1, char *s2) {
    char *p=s1;
    char *p2=s2;
    for (int i=0;s1[i]==s2[i];p++,p2++,i++);
    char *s=s1;
    char *s2a=s2;
    for (;*s!='\0';s++);
    for (;*s2a!='\0';s2a++);
    s--;
    s2a--;
    for (;p<s;p++,s--) {
        char temp=*p;
        *p=*s;
        *s=temp;
    }
    for (;p2<s2a;p2++,s2a--) {
        char temp=*p2;
        *p2=*s2a;
        *s2a=temp;
    }
}

int main(int argc, char *argv[]) {
    if (argc!=3) {
        printf("Utilizzo: subreverse <1°parola> <2°parola>\n");
        return 0;
    }
    subreverse(argv[1],argv[2]);
    printf("%s %s\n",argv[1],argv[2]);
    return 1;
}