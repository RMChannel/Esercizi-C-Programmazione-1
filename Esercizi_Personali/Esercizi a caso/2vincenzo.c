#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

void controlword(char tempword[],char word[],int *i) {
        if (strlen(tempword)>strlen(word)) {
            memset(word,0,100);
            for (int i2=0;i2<strlen(tempword);i2++) word[i2]=tempword[i2];
            memset(tempword,0,100);
            *i=0;
        }
}

int main(void) {
    char ch, word[100], tempword[100];
    memset(tempword,0,100);
    memset(word,0,100);
    int controlcount=TRUE, count=0, i=0;
    printf("Inserisci una frase: ");
    while ((ch=getchar())!='\n') {
        if (ch!=' ') {
            if (controlcount) {
                count++;
                controlcount=FALSE;
            }
            tempword[i]=ch;
            i++;
        }
        else controlword(tempword,word,&i);
        if (ch==' ') controlcount=TRUE;
    }
    controlword(tempword,word,&i);
    printf("Numero di parole: %d\nParola piu' lunga: ", count);
    for (int i3=0;i3<strlen(word);i3++) printf("%c",word[i3]);
}