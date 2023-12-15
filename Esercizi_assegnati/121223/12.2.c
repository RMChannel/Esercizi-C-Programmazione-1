#include <stdio.h>
#define N 100

int palindroma(char *s) {
    int i2, max;
    for (i2=0;s[i2]!='\n';i2++);
    max=i2;
    i2--;
    for (int i=0;i<max;i++) if (s[i]>='A' && s[i]<='Z') s[i]=s[i]-'A'+'a';
    for (int i=0;(i<max && i2>=0);i++,i2--) {
        while ((s[i]<'a' || s[i]>'z') && i<N) i++;
        while ((s[i2]<'a' || s[i2]>'z') && i2>0) i2--;
        if (s[i]!=s[i2]) return 0;
    }
    return 1;
}

int main(void) {
    char s1[N];
    printf("Inserisci la stringa: ");
    for (int i=0;(i<N && (s1[i]=getchar())!='\n');i++);
    if (palindroma(s1)) printf("La stringa inserita e' palindroma\n");
    else printf("La stringa inserita non e' palindroma\n");
}