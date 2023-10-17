#include <stdio.h>

int main(void) {
    int m,d,y;
    printf("Inserisci una data mm/dd/yy; ");
    scanf("%d/%d/%d",&m,&d,&y);
    printf("Dated this %d",d);
    if (((d&10)==2) && (d!=11)) printf("st");
    else if (((d&10)==2) && (d!=12)) printf("nd");
    else if (((d&10)==3) && (d!=13)) printf("rd");
    else printf("th");
    printf(" day of ");
    switch(m) {
        case 1:
            printf("January");
            break;
        case 2:
            printf("February");
            break;
        case 3:
            printf("March");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("June");
            break;
        case 7:
            printf("July");
            break;
        case 8:
            printf("August");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("October");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("December");
            break;
    }
    printf(", 20%d\n",y);
}