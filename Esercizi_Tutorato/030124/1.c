#include <stdio.h>
#include <stdlib.h>

void antipodo(char *s, int n) {
    s+=n;
    char *s1=s;
    while (*s1) s1++;
    s1--;
    for (;s<s1;s++,s1--) {
        char temp=*s;
        *s=*s1;
        *s1=temp;
    }
}

int main(int argc, void *argv[]) {
    if (argc!=3) {
        printf("Numero argomenti errato\n");
        return 1;
    }
    antipodo(argv[1],atoi(argv[2]));
    printf("%s\n",argv[1]);
    return 0;
}