#include <stdio.h>

int main(void) {
    while (1) {
        double x, y=1.0f, temp, average, temp2;
        char scelta;
        printf("Inserisci un numero: ");
        scanf("%lf",&x);
        getchar();
        temp2=x;
        while (1) {
            temp=x/y;
            average=(temp+y)/2;
            temp2-=y;
            if (temp2<0) temp2*=-1;
            if (temp2<(y*0.00001)) break;
            else {
                temp2=y;
                y=average;
            }
        }
        printf("Radice quadrata: %lf\nVuoi terminare il programma?\n[S]Sì\n[Altro]No\n",average);
        scelta=getchar();
        if ((scelta=='S') || (scelta=='s')) break;
    }
}