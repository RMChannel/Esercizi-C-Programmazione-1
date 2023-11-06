#include <stdio.h>

int main(void) {
    while (1) {
        int a,b,c,d,temp,gcd,min,n1n=0,n2n=0,i=2;
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
        if (a<0) {
            n1n=1;
            a*=-1;
            }
        if (c<0) {
            n2n=1;
            c*=-1;
            }
        do {
            gcd=1;
            if (a<c) min=a;
            else min=c;
            while (i<=min) {
                if (((a%i)==0) && ((c%i)==0)) gcd=i;
                i++;
            }
            a/=gcd;
            c/=gcd;
        } while (gcd>1);
        if ((n1n) && (n2n));
        else {
            if (n1n) a*=-1;
            if (n2n) c*=-1;
        }
        printf("= %d/%d\nVuoi terminare il programma?\n[S]Sì\n[Altro]No\n",a,c);
        operation=getchar();
        if ((operation=='S') || (operation=='s')) break;
        while (getchar()!='\n');
    }
}

//Ho voluto fare una versione alternativa dove la frazione veniva anche semplificata