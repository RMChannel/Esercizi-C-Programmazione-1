#include <stdio.h>

char *asporto(char *s, char *t, char *z) {
    char *sf=s;
    char *tf=t;
    char *zi=z;
    for (;*sf;sf++);
    for (;*tf;tf++);
    for (;(*sf==*tf);sf--,tf--);
    for (;(*s==*t);s++,t++);
    while (s<=sf) {
        *z=*s;
        s++;
        z++;
    }
    while (t<=tf) {
        *z=*t;
        t++;
        z++;
    }
    return zi;
}

int main(void) {
    char s[100]="pane";
    char t[100]="panne";
    char z[100]="";
    asporto(s,t,z);
    printf("%s\n",z);
}