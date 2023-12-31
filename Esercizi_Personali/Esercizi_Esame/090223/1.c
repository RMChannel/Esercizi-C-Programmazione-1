#include <stdio.h>
#define FALSE 0
#define TRUE 1

int cambio(char *s, char *t) {
    int flag=FALSE;
    for (;(*s || *t);s++,t++) {
        while (*s=='a' || *s=='e' || *s=='i' || *s=='o' || *s=='u') s++;
        while (*t=='a' || *t=='e' || *t=='i' || *t=='o' || *t=='u') t++;
        if (*s!=*t && flag) return 0;
        else if (*s!=*t) flag=TRUE;
        if ((*s=='\0' || *t=='\0') && *s!=*t) return 0;
    }
    if (flag) return 1;
    else return 0;
}

int main(void) {
    char x[100]="carta";
    char y[100]="casta";
    printf("Inserisci la 1°parola: ");
    scanf("%s",x);
    printf("Inserisci la 2°parola: ");
    scanf("%s",y);
    printf("Le due parole %s %s ",x,y);
    if (!cambio((x+1),(y+1))) printf("non ");
    printf("sono un cambio di consonante\n");
}