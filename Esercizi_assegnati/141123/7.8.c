#include <stdio.h>

int main(void) {
    int h,m,aop=2;
    char a;
    printf("Inserisci un orario in formato 12h: ");
    scanf("%d:%d",&h,&m);
    if ((h>12) || (m>59) || (m<0) || (h<0)) {
        printf("Orario non corretto, riprovare\n");
        while (a!='\n') a=getchar();
        return 0;
    }
    while (a!='\n') {
        if ((a=='a') || (a=='A')) aop=0;
        else if ((a=='p') || (a=='P')) aop=1;
        a=getchar();
    }
    if (aop==2) {
        printf("Formato ora non corretto, riprovare\n");
        while (a!='\n') a=getchar();
        return 0;
    }
    if (h==12) h=0;
    if (aop) h+=12;
    h=(h*60)+m;
    if (h>=1305) printf("Non ci sono aerei disponibili\n");
    else {
        printf("IL primo aereo disponibile e' quello delle ");
        if ((h-480)<(583-h)) printf("8:00am ed arriva alle 10:16am\n");
        else if ((h-583)<(679-h)) printf("9:43am ed arriva alle 11:52am\n");
        else if ((h-679)<(767-h)) printf("11:19am ed arriva alle 01:31pm\n");
        else if ((h-767)<(840-h)) printf("12:47pm ed arriva alle 03:00pm\n");
        else if ((h-840)<(945-h)) printf("02:00pm ed arriva alle 04:08pm\n");
        else if ((h-945)<(1140-h)) printf("03:45pm ed arriva alle 05:55pm\n");
        else if ((h-1140)<(1305-h)) printf("07:00pm ed arriva alle 09:20pm\n");
        else if (h<1305) printf("09:45pm ed arriva alle 11:58pm\n");
    }
}