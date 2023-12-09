#include <stdio.h>
#define MAX 10


char scarto(char *s, char *t) {
    for (int i=0;i<MAX;i++) if (s[i]>='A' && s[i]<='Z') s[i]=s[i]-'A'+'a';
    for (int i=0;i<MAX;i++) if (t[i]>='A' && t[i]<='Z') t[i]=t[i]-'A'+'a';
    for (int i=0;(s[i]>='a' && s[i]<='z');i++) {
        int control=1;
        for (int i2=0;(t[i2]>='a' && t[i2]<='z');i2++) if (s[i]==t[i2]) control=0;
        if (control) return NULL;
    }
    return *s;
}

int main(void) {
    char s[MAX], t[MAX], ch;
    int n, n2;
    for (int i=0;i<MAX;i++) s[i]=t[i]='\0';
    printf("Inserisci la 1 parola: ");
    for (n=0;(n<MAX && ((ch=getchar())!='\n'));n++) s[n]=ch;
     printf("Inserisci la 2 parola: ");
    for (n2=0;(n2<MAX && ((ch=getchar())!='\n'));n2++) t[n2]=ch;
    char *p=scarto(s,t);
    if (p==NULL) printf("La parola non e' uno scarto\n");
    else printf("La parole e' uno scarto\n");
}