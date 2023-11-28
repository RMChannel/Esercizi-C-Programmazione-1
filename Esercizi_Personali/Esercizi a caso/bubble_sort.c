#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100

void bubble_sort(long int a[]) {
    for (long int i=(N-2);i>=0;i--) {
        long int max=0, imax=0, j=0;
        for (;j<=i;j++) {
            if (a[j]>max) {
                max=a[j];
                imax=j;
            }
        }
        if (imax!=j && a[j]<a[imax]) {
            a[imax]=a[j];
            a[j]=max;
        }
    }
}

void rand_array(long int a[]) {
    srand(time(NULL));
    for (long int i=0;i<N;i++) a[i]=(rand()%100);
}

int main(void) {
    long int a[N];
    rand_array(a);
    bubble_sort(a);
    for (long int i=0;i<N;i++) printf("%d ",a[i]);
    printf("\n");
}