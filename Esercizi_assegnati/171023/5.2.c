#include <stdio.h>

int main(void) {
    int h,m;
    printf("Inserisci l'orario in formato 24H: ");
    scanf("%d:%d",&h,&m);
    if ((h==24) || (h==0)) printf("12:%d AM\n",m);
    else if (h==12) printf("12:%d PM\n",m);
    else if (h>13) printf("%d:%d PM\n",(h-=12),m);
    else printf("%d:%d AM\n",h,m);
}