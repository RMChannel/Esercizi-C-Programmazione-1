#include <stdio.h>
#include <stdlib.h>

int estrazione(char *s, char *t, char *z) {
    int nsuffisso=0;
    int nprefisso=0;
    char *s1=s;
    char *t1=t;
    for (;*s==*t;s++,t++,nprefisso++);
    while (*s1) s1++;
    while (*t1) t1++;
    s1--;
    t1--;
    for (;*s1==*t1;s1--,t1--,nsuffisso++);
    if (nsuffisso<nprefisso || nprefisso==0) return 0;
    for (;s<=s1;s++,z++) *z=*s;
    for (;t<=t1;t++,z++) *z=*t;
    return 1; 
}

int main(int argc, char *argv[]) {
    char z[20]="";
    if (argc!=3) printf("Uso corretto: ./a.exe <parola 1> <parola 2>\n");
    else printf("%d",estrazione(argv[1],argv[2],z));
    printf(" %s\n",z);
}