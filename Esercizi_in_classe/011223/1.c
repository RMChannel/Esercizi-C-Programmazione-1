#include <stdio.h>

int strcmp(const char *s, const char *t) {
    for (int i=0;(s[i]!='\n');i++) {
        if (s[i]==t[i]) continue;
        else if (t[i]=='\n') return 1;
        else if (s[i]<t[i]) return -1;
        else if (s[i]>t[i]) return 1;
    }
    return 0;
}

int main(void) {
    char ch, s1[300],s2[300];
    int i;
    printf("Inserisci la 1 stringa: ");
    for (i=0;((ch=getchar())!='\n');i++) s1[i]=ch;
    s1[i]='\n';
    printf("Inserisci la 2 stringa: ");
    for (i=0;((ch=getchar())!='\n');i++) s2[i]=ch;
    s2[i]='\n';
    for (i=0;(s1[i]!='\n');i++) printf("%c",s1[i]);
    printf("\n");
    for (i=0;(s2[i]!='\n');i++) printf("%c",s2[i]);
    i=strcmp(s1,s2);
    printf("\nRisultato=%d\n",i);
}