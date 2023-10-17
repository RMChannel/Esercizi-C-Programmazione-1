#include <stdio.h>

int main(void) {
    float n1,n2;
    int o;
    printf("Inserisci il 1°numero: ");
    scanf("%f",&n1);
    printf("Inserisci il 2°numero: ");
    scanf("%f",&n2);
    printf("Scegli l'operazione:\n[1]Somma\n[2]DIfferenza\n[3]Prodotto\n[4]Modulo\n[5]Quoziente\n");
    scanf("%d",&o);
    switch(o) {
        case 1:
            n1=n1+n2;
            break;
        case 2:
            n1=n1-n2;
            break;
        case 3:
            n1=n1*n2;
            break;
        case 4:
            int ni1=n1;
            int ni2=n2;
            if ((ni1<0) && (ni2<0)) {
                n1=(ni1*-1)%(ni2*-1);
            }
            else if ((ni1<0) || (ni2<0)) {
                if (n1<0) ni1=ni1*-1;
                else ni2=ni2*-1;
                n1=(ni1%ni2)*-1;
            }
            else {
                n1=ni1%ni2;
            }
            break;
        case 5:
            if ((n1<0) && (n2<0)) {
                n1=(n1*-1)/(n2*-1);
            }
            else if ((n1<0) || (n2<0)) {
                if (n1<0) n1=n1*-1;
                else n2=n2*-1;
                n1=(n1/n2)*-1;
            }
            else {
                n1=n1/n2;
            }
            break;
    }
    printf("Risultato= %f\n",n1);
}