#include <stdio.h>

int main(void) {
    int h,m;
    printf("Inserisci l'orario in formato 24H: ");
    scanf("%d:%d",&h,&m);
    if ((h>23) || (h<0) || (m>59) || (m<0)) {
        printf("L'orario non è corretto, riprovare\n");
        return 0;
    }
    else if (h==0) printf("12:%.2d AM\n",m);
    else if (h==12) printf("12:%.2d PM\n",m);
    else if (h>13) printf("%.2d:%.2d PM\n",(h-12),m);
    else printf("%.2d:%.2d AM\n",h,m);
    return 0;
}