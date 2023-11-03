#include <stdio.h>

int main(void) {
    int d1,d2,m1,m2,y1,y2;
    printf("Inserisci la prima data: ");
    scanf("%d/%d/%d", &m1,&d1,&y1);
    printf("Inserisci la seconda data: ");
    scanf("%d/%d/%d", &m2,&d2,&y2);
    if ((m1>12) || (m2>12) || (m1<1) || (m2<1) || (d1<1) || (d2<1) || (d1>31) || (d2>31) || (y1<0) || (y2<0)) printf("Date non valide, riprovare\n");
    else if ((y1>y2) || ((y1==y2) && (m1>m2)) || ((y1==y2) && (m1==m2) && (d1>d2))) {
        printf("%d/%d/%d viene prima di %d/%d/%d\n",m2,d2,y2,m1,d1,y1);
    }
    else if ((y1<y2) || ((y1==y2) && (m1<m2)) || ((y1==y2) && (m1==m2) && (d1<d2))) {
        printf("%d/%d/%d viene prima di %d/%d/%d\n",m1,d1,y1,m2,d2,y2);
    }
    else {
        printf("Le date sono uguali\n");
    }
}