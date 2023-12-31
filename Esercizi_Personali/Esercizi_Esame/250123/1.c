#include <stdio.h>
#define MAX 100

int elinversione(char *s, char *t, char *z) {
    char *shome=s;
    for (;*s==*t;s++,t++);
    if ((s-shome)<=1) return 0;
    shome=s;
    for (;*s;s++);
    s--;
    for (;s>=shome;s--,z++) if (*s!=*z) return 0;
    for (;(*t || *z);t++,z++) if (*t!=*z) return 0;
    return 1;
}

int main(void) {
    char s[MAX]="";
    char t[MAX]="";
    char z[MAX]="";
    printf("Inserisci la 1°parola: ");
    scanf("%s",s);
    printf("Inserisci la 2°parola: ");
    scanf("%s",t);
    printf("Inserisci la 3°parola: ");
    scanf("%s",z);
    printf("%s",z);
    if (!elinversione(s,t,z)) printf(" non");
    printf(" e' un elinversione di %s e %s\n",s,t);
}