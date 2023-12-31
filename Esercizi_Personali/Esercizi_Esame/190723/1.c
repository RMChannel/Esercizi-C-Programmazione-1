#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int rotation(const char *s, const char *z, int r) {
    char temp[100]="";
    int counter=0;
    for (int i=0;i<strlen(z);i++) {
        int itemp=i+r;
        if (itemp>=strlen(z)) itemp-=strlen(z);
        temp[itemp]=z[i];
    }
    if (!strcmp(s,temp)) return 1;
    else return 0;
}

int main(int argc, void *argv[]) {
    if (argc!=4) printf("USo del programma non corretto\nUso corretto:\n./rotation <parola 1> <parola 2> <n caratteri da ruotare>\n");
    else {
        char z[100]="";
        printf("La parola %s ",argv[1]);
        if (!rotation(argv[1],argv[2],atoi(argv[3]))) printf("non ");
        printf("e' la rotazione di %s di %s caratteri\n",argv[2],argv[3]);
    }
}