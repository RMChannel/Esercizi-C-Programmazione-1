#include <stdio.h>
#include <string.h>
#define N 100

int stringa_contenuta(char *s1, char *s2) {
    for (;*s2;s2++) {
        int flag=1;
        for (int i=0;(i<strlen(s1) && flag);i++) {
            if (s1[i]==*s2) {
                flag=0;
                s1[i]='@';
            }
        }
        if (flag) return 0;
    }
    return 1;
}

int main(void) {
    char s1[N]="";
    char s2[N]="";
    printf("Inserisci una parola [MAX 100]: ");
    scanf("%s",s1);
    printf("Inserisci una 2° parola [MAX 100]: ");
    scanf("%s",s2);
    if(stringa_contenuta(s1,s2)) printf("Si\n");
    else printf("No\n");
}