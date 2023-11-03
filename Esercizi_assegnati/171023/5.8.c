#include <stdio.h>

int main(void) {
    int h,m;
    printf("Inserisci l'orario: ");
    scanf("%d:%d",&h,&m);
    if ((h>24) || (h<0) || (m>59) || (m<0)) {
        printf("L'orario non è corretto, riprovare\n");
        return 0;
    }
    h=(h*60)+m;
    if (h>=1305) printf("Non ci sono aerei disponibili\n");
    else {
        printf("IL primo aereo disponibile è quello delle ");
        if (h<480) printf("8:00am ed arriva alle 10:16am\\n");
        else if (h<583) printf("9:43am ed arriva alle 11:52am\n");
        else if (h<679) printf("11:19am ed arriva alle 01:31pm\n");
        else if (h<767) printf("12:47pm ed arriva alle 03:00pm\n");
        else if (h<840) printf("02:00pm ed arriva alle 04:08pm\n");
        else if (h<945) printf("03:45pm ed arriva alle 05:55pm\n");
        else if (h<1140) printf("07:00pm ed arriva alle 09:20pm\n");
        else if (h<1305) printf("09:45pm ed arriva alle 11:58pm\n");
    }
}