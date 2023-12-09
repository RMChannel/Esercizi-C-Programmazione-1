#include <stdio.h>
#define MAX 1000

int main(void) {
    char frase[MAX];
    char ch;
    int i=0;
    printf("Inserisci una frase: ");
    do {
        ch=getchar();
        frase[i]=ch;
        i++;
    } while (ch!='?' && ch!='!' && ch!='.');
    i-=1;
    for (;i>=0;i--) {
        int i2=i;
        while (frase[i]!=' ' && i>=0) i--;
        int i3=i+1;
        while (i3<=i2) {
            printf("%c", frase[i3]);
            i3++;
        }
        printf(" ");
    }
}