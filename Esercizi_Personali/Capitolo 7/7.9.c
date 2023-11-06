#include <stdio.h>

int main(void) {
    int h,m,aop=2;
    char a;
    while (1) {
        printf("Inserisci un orario in formato 12h: ");
        scanf("%d:%d",&h,&m);
        if ((h>12) || (m>59) || (m<0) || (h<0)) {
            printf("Orario non corretto, riprovare\n");
            while (a!='\n') a=getchar();
            continue;
        }
        a=getchar();
        while (a!='\n') {
            if ((a=='a') || (a=='A')) aop=0;
            else if ((a=='p') || (a=='P')) aop=1;
            a=getchar();
        }
        if (aop==2) {
            printf("Formato ora non corretto, riprovare\n");
            while (a!='\n') a=getchar();
            continue;
        }
        if (h==12) h=0;
        if (aop) h+=12;
        printf("Orario in formato 24h: %.2d:%.2d\nVuoi ripetere il programma?\n[S]Sì\n[Altro]No\n",h,m);
        a=getchar();
        if (a!='S' && a!='s') break;
        while (a!='\n') a=getchar();
    }
}