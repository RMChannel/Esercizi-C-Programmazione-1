#include <stdio.h>

int main(void) {
    while (1) {
        int count[26]={0};
        char c;
        printf("Inserisci una frase: ");
        do {
            c=getchar();
            if (c!=' ') {
                if (c>='a' && c<='z') count[(c-'a')]++;
                else if (c>='A' && c<='Z') count[(c-'A')]++;
            }
        } while(c!='\n');
        for (int i=0;i<26;i++) {
            if (count[i]==1) printf("La lettera %c occorre 1 volta\n",(i+'A'));
            else if (count[i]>0) printf("La lettera %c occorre %d volte\n",(i+'A'),count[i]);
        }
        printf("Vuoi terminare il programma?\n[S]Si\n[Altro]No\n");
        c=getchar();
        if (c=='s' || c=='S') return 0;
        else while (c!='\n') c=getchar();
    }
}