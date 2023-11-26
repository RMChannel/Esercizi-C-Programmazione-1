#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int a[26]={0}, n, flag=0;
    srand(time(NULL));
    while (1) {
        n=(rand())%26;
        a[n]=1;
        flag=1;
        for (int i=0;i<26;i++) {
            if (a[i]==0) flag=0;
            printf("%d ",a[i]);
        }
        if (flag) return 0;
        printf("\n");
    }
}