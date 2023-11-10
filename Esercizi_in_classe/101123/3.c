#include <stdio.h>
#define N 10

int main(void) {
    int numeri[N], i;
    for (i=0;i<N;i++) {
        int temp;
        printf("Insersici il %d numero: ",(i+1));
        scanf("%d",&temp);
        if (temp!=0) numeri[i]=temp;
        else break;
    }
    printf("\n");
    for (int i2=0;i2<(i/2);i2++) {
        int temp=numeri[i2];
        numeri[i2]=numeri[(i-i2-1)];
        numeri[(i-i2-1)]=temp;
    }
    for (int i3=0;i3<i;i3++) printf("%d ",numeri[i3]);
    printf("\n");
}