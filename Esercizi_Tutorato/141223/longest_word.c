#include <stdio.h>

int longest_word(char s[]) {
    int n=0, temp=0;
    for (int i=0;s[i]!='\n';i++) {
        if (s[i]!=' ') temp++;
        else {
            if (temp>n) n=temp;
            temp=0;
        }
    }
    return n;
}

int main(void) {
    char word[51]="";
    printf("Inserisci una frase da MAX 50 caratteri: ");
    for (int i=0;(word[i]=getchar())!='\n';i++);
    printf("%d",longest_word(word));
}