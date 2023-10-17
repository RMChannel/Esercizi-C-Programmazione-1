#include <stdio.h>

int main(void) {
    int d1,d2,m1,m2,y1,y2;
    printf("Inserisci la prima data: ");
    scanf("%d/%d/%d", &m1,&d1,&y1);
    printf("Inserisci la seconda data: ");
    scanf("%d/%d/%d", &m2,&d2,&y2);
    if ((y1>y2) || ((y1==y2) && (m1>m2)) || ((y1==y2) && (m1==m2) && (d1>d2))) {
        printf("La seconda data è quella più antica\n");
    }
    else if ((y1<y2) || ((y1==y2) && (m1<m2)) || ((y1==y2) && (m1==m2) && (d1<d2))) {
        printf("La prima data è quella più antica\n");
    }
    else {
        printf("Le date sono uguali\n");
    }
}