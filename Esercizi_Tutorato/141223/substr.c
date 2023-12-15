#include <stdio.h>
#include <string.h>
#define TRUE 1
#define FALSE 0

int f_subtr(char *s, char *t) {
    int i=0;
    for (int i2=0;(i2<strlen(s) && i<strlen(t));i2++) if (s[i2]==t[i]) i++;
    if (i!=strlen(t)) return FALSE;
    else return TRUE;
}

int main(int argc, char *argv[]) {
    if (argc!=3) {
        printf("Utilizzo: substr <parola> <sottoparola>\n");
        return 0;
    }
    if (f_subtr(argv[1],argv[2])) printf("%s è una sottostringa di %s\n",argv[2],argv[1]);
    else printf("%s non è una sottostringa di %s\n",argv[2],argv[1]);
    return 1;
}