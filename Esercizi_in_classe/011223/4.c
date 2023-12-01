#include <stdio.h>

long long int atoi(char *s) {
    int i=0, num=0, segno=0;
    if (s[i]=='-') {
        segno=1;
        i++;
    }
    else if (s[i]=='+') i++;
    for (;(s[i]>='0' && s[i]<='9');i++) {
        num*=10;
        num+=(s[i]-'0');
    }
    if (segno) num*=-1;
    return num;
}

int main(void) {
    char s[10];
    printf("Inserisci un numero: ");
    scanf("%s",s);
    printf("%lld\n",atoi(s));
}