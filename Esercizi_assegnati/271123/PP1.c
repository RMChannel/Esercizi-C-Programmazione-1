#include <stdio.h>
#define N 5

int f_pari(int a[], int i) {
    int sum=0;
    for (int i2=0;i2<i;i2++) {
        int temp=0;
        while (a[i2]>0) {
            temp+=(a[i2]%10);
            a[i2]/=10;
        }
        if (temp%2==0) sum++;
    }
    return sum;
}

int main(void) {
    int a[N], i=0;
    while (i<N) {
        printf("Inserisci il %d numero: ",i+1);
        scanf("%d",&a[i]);
        i++;
    }
    printf("Inserisci il numero di cifre da analizzare: ");
    scanf("%d",&i);
    if (i<=N) printf("Numeri validi: %d\n",f_pari(a,i));
    else printf("Numero di cifre da analizzare non corretto, riprovare\n");
}