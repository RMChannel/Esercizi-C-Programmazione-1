#include <stdio.h>
#define N 40
int main(void) {
    while (1) {
        long int n[N], a;
        n[0]=0;
        n[1]=1;
        for (int i=0;i<N;i++) {
                n[i+2]=n[i]+n[i+1];
            }
        for (int i=0;i<N;i++) printf("%d ",n[i]);
        printf("\nVuoi ripetere il programma?\n[1]Si\n[Altro]No\n");
        scanf("%d",&a);
        if (a!=1) break;
    }
}