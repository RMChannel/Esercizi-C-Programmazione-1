#include <stdio.h>

void palindrom(int a[], int dimension) {
    int i1,i2;
    i1=i2=(dimension/2);
    i1--;
    for (;(i1>=0 && i2<dimension);i1--,i2++) a[i2]=a[i1];
}


int main(void) {
    int a[]={10,20,14,0,0,0};
    int dimension=sizeof(a)/sizeof(a[0]);
    if ((dimension%2)!=0) printf("La dimensione dell'array non e' pari\n");
    else {
        palindrom(a,dimension);
        for (int i=0;i<dimension;i++) printf("%d ",a[i]);
    }
}