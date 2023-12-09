#include <stdio.h>

int palindroma(char *s, int n) {
    for (int i=0;i<n;i++) if (s[i]>='A' && s[i]<='Z') s[i]=s[i]-'A'+'a';
    for (int i=0, i2=n-1;i<n;i++,i2--) {
        while (s[i]<'a'|| s[i]>'z') i++;
        while (s[i2]<'a' || s[i2]>'z') i2--;
        if (s[i]!=s[i2]) return 0;
    }
    return 1;
}

int main(void) {
    char s1[100];
    int n=0;
    printf("Inserisci la stringa: ");
    while ((s1[n]=getchar())!='\n') n++;
    if (palindroma(s1,n)) printf("La stringa inserita e' palindroma\n");
    else printf("La stringa inserita non e' palindroma\n");
}

//Ho messo il controllo così che funzionasse con lettere maiuscole e minuscole e caratteri speciali