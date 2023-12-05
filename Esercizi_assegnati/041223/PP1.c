#include <stdio.h>
#define TRUE 1
#define FALSE 0

int pp1function(int *array, int max) {
    for (int i=0;i<max;i+=2) if (array[i]>array[i+1]) return FALSE;
    return TRUE;
}


int main(void) {
    int a[]={10,20,14,34,10,34,10,4},b[]={10,20,14,34,10,34,4,10}; //Array per test
    int max=sizeof(a)/sizeof(a[0]); //Valore massimo dell'array
    if (pp1function(a,max)) printf("L'array a e' zig-zag\n");
    else printf("L'array a non e' zig-zag\n");

    max=sizeof(b)/sizeof(b[0]);
    
    if (pp1function(b,max)) printf("L'array b e' zig-zag\n");
    else printf("L'array b non e' zig-zag\n");
}