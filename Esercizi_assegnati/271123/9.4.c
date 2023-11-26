#include <stdio.h>

#define TRUE 1
#define FALSE 0

void read_word(int counts[]) {
    char ch;
    while ((ch=getchar())!='\n') {
        if (ch>='a' && ch<='z') counts[(ch-'a')]++;
        else if (ch>='A' && ch<='Z') counts[(ch-'A')]++;
        else break;
    }
}


int equal_array(int counts1[], int counts2[]) {
    for (int i=0;i<26;i++) if (counts1[i]!=counts2[i]) return FALSE;
    return TRUE;
}


int main(void) {
    int counts1[26]={0}, counts2[26]={0};
    printf("Inserisci la prima parola: ");
    read_word(counts1);
    printf("Inserisci la seconda parola: ");
    read_word(counts2);
    if (equal_array(counts1,counts2)) printf("Le due parole sono anagrammi\n");
    else printf("Le due parole non sono anagrammi\n");
}