#include <stdio.h>

int main(void) {
    int n;
    printf("Inserisci un numero: ");
    scanf("%d",&n);
    for (int i=0;i<=n;i++) {
        int temp=i, result=0, resto;
        while (temp>0) {
            resto=temp%10;
            result=(result*10)+resto;
            temp/=10;
        }
        if (result==i) printf("%d\n",result);
    }
}