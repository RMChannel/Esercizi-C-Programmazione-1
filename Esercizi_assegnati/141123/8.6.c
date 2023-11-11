#include <stdio.h>

int main(void) {
    while (1) {
        char message[100], a;
        int i2;
        for (int i=0;i<100;i++) message[i]='\n';
        printf("Inserisci il messaggio: ");
        a=getchar();
        for (int i=0;a!='\n';a=getchar(),i++) message[i]=a;
        for (i2=0;message[i2]!='\n';i2++) {
            switch(message[i2]) {
                case 'a': case 'A':
                    message[i2]='4';
                    break;
                case 'b': case 'B':
                    message[i2]='8';
                    break;
                case 'e': case 'E':
                    message[i2]='3';
                    break;
                case 'i': case 'I':
                    message[i2]='1';
                    break;
                case 'o': case 'O':
                    message[i2]='0';
                    break;
                case 's': case 'S':
                    message[i2]='5';
                    break;
                default:
                    if (message[i2]>='a' && message[i2]<='z') message[i2]=message[i2]-'a'+'A';
            }
        }
        for (int i3=i2+10;(i2<i3 && i2<100);i2++) message[i2]='!';
        for (int i=0;message[i]!='\n';i++) putchar(message[i]);
        printf("\nVuoi terminare il programma?\n[S]Si\n[Altro]No\n");
        a=getchar();
        if (a=='s' || a=='S') return 0;
        while (a!='\n') a=getchar();
    }
}