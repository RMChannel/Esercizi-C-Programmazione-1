#include <stdio.h>

int main(void) {
    char c;
    while (1) {
        int temp=0, i=0;
        float media=0;
        printf("Inserisci una frase: ");
        c=getchar();
        for (;c!='\n';c=getchar()) {
            if (c!=' ') temp++;
            else {
                media+=temp;
                i++;
                temp=0;
            }
        }
        media=(float)((media+temp)/(i+1));
        printf("La media delle lettere per parola e': %f\nVuoi terminare il programma?\n[S]Si'\n[Altro]No\n",media);
        c=getchar();
        if ((c=='S') || (c=='s')) break;
        while (c!='\n') c=getchar();
    }
}