#include <stdio.h>
#include <string.h>
#define N 20

int main(void) {
    char smin[N];
    char smax[N];
    for (int i=0;i<N;i++) {
        smin[i]='A';
        smax[i]='\0';
    }
    int n=0;
    do {
        char input[N];
        int i;
        for (int i2=0;i2<N;i2++) input[i2]='\0';
        printf("Inserisci una parola: ");
        for (i=0;(i<(N-1) && (input[i]=getchar())!='\n');i++);
        if (strlen(input)<strlen(smin)) {
            for (int i2=0;i2<N;i2++) smin[i2]='\0';
            for (int i2=0;i2<strlen(input);i2++) smin[i2]=input[i2];
        }
        if (strlen(input)>strlen(smax)) for (int i2=0;i2<strlen(input);i2++) smax[i2]=input[i2];
        n=i;
    } while (n!=4);
    printf("Parola minore: ");
    for (int i=0;i<strlen(smin);i++) printf("%c",smin[i]);
    printf("Parola maggiore: ");
    for (int i=0;i<strlen(smax);i++) printf("%c",smax[i]);
}