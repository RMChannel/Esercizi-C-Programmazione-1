#include <stdio.h>

void inverti_cifre(char *s) {
    char *t=s;
    while (*s) {
        char *temp;
        if (*s>='0' && *s<='9') {
            t=s;
            while (*t>='0' && *t<='9') t++;
            temp=t;
            t--;
            while (s<t) {
                char temp2=*s;
                *s=*t;
                *t=temp2;
                *s++;
                *t--;
            }
            s=temp;
        }
    s++;
    }
}

int main(int argc, char *argv[]) {
    inverti_cifre(argv[1]);
    printf("%s",argv[1]);
}