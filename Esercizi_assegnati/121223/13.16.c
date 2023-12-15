#include <stdio.h>
#include <string.h>

void reverse(char *message) {
    int max=(strlen(message))/2;
    int i2=0;
    int i3=strlen(message)-1;
    for (int i=0;i<max;i++,i2++,i3--) {
        char temp=message[i2];
        message[i2]=message[i3];
        message[i3]=temp;
    }
}

int main(void) {
    char message[21], ch;
    for (int i=0;i<21;i++) message[i]='\0';
    printf("Inserisci una parola (MAX 20): ");
    for (int i=0;(i<20 && (ch=getchar())!='\n');i++) message[i]=ch;
    reverse(message);
    for (int i=0;i<strlen(message);i++) printf("%c",message[i]);
}