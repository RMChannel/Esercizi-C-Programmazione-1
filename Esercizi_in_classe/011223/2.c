#include <stdio.h>

int palindroma(char *s, int n) {
    for (int i=0;i<n;i++) if (s[i]>='A' && s[i]<='Z') s[i]=s[i]-'A'+'a';
    for (int i=0, i2=n-1;i<n;i++,i2--) if (s[i]!=s[i2]) return 0;
    return 1;
}

int main(void) {
    char s1[100];
    int n;
    printf("Inserisci la lunghezza della stringa [MAX 100]: ");
    scanf("%d",&n);
    while ((getchar())!='\n');
    printf("Inserisci la stringa: ");
    for (int i=0;i<n;i++) s1[i]=getchar();
    if (palindroma(s1,n)) printf("La stringa inserita e' palindroma\n");
    else printf("La stringa inserita non e' palindroma\n");
}