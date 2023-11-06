#include <stdio.h>

int main(void) {
    while (1) {
        int a,b,c,d,temp;
        char operation;
        printf("Inserisci due frazioni di numeri interi con al centro il simbolo dell'operazione:\n");
        scanf("%d/%d%c%d/%d",&a,&b,&operation,&c,&d);
        getchar();
        switch(operation) {
            case '+':
                a=(d*a)+(b*c);
                c=b*d;
                break;
            case '-':
                a=(d*a)-(b*c);
                c=b*d;
                break;
            case '/':
                temp=d;
                d=c;
                c=temp;
            case '*':
                a*=c;
                c=b*d;
                break;
            default:
                printf("Operazione non riconosciuta, riprovare\n");
                return 0;
        }
        printf("= %d/%d\nVuoi terminare il programma?\n[S]Sì\n[Altro]No\n",a,c);
        operation=getchar();
        if ((operation=='S') || (operation=='s')) break;
        while (getchar()!='\n');
    }
}