#include <stdio.h>

int mystrlen(char *s) {
    int n=0;
    for (;*s;s++,n++);
    return n;
}

int mystrcmp(char *s, char *t) {
    for (;(*s==*t && *s && *t);s++,t++);
    if (!(*s) && !(*t)) return 1;
    else return 0; 
}

int scambio(char *s, char *t) {
    char *s1=s;
    char *t1=t;
    int countchange=0;
    char temp='\0';
    if (mystrlen(s)!=mystrlen(t)) return 0;
    while (*s && *t && countchange<2) {
        for (;(*s==*t && *s && *t);s++,t++);
        if (countchange==1) {
            *s=temp;
            countchange++;
        }
        else if (countchange==0) {
            temp=*s;
            *s=*t;
            countchange++;
        }
        s++;
        t++;
    }
    return (mystrcmp(s1,t1));
}

int main (int argc, char *argv[]) {
    printf("Le parole %s e %s ",argv[1],argv[2]);
    if (argc!=3) printf("Uso scorretto del programma rilevato, uso corretto:\n./a.out <parola 1> <parola 2>");
    else if (!scambio(argv[1],argv[2])) printf("NON ");
    printf("sono formate da uno scambio\n");
}