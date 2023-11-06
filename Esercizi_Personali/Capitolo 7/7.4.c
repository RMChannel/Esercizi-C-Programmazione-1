#include <stdio.h>

int main(void) {
    char a;
    while (1) {
        printf("Inserisci un numero di telefono: ");
        a=getchar();
        while (a!='\n') {
            if (!(a>='0' && a<='9') && (a!='\n')) {
                switch(a) {
                    case 'a': case 'A': case 'b': case 'B': case 'c': case 'C':
                        printf("2");
                        break;
                    case 'd': case 'D': case 'e': case 'E': case 'f': case 'F':
                        printf("3");
                        break;
                    case 'g': case 'G': case 'h': case 'H': case 'i': case 'I':
                        printf("4");
                        break;
                    case 'j': case 'J': case 'k': case 'K': case 'l': case 'L':
                        printf("5");
                        break;
                    case 'm': case 'M': case 'n': case 'N': case 'o': case 'O':
                        printf("6");
                        break;
                    case 'p': case 'P': case 'r': case 'R': case 's': case 'S':
                        printf("7");
                        break;
                    case 't': case 'T': case 'u': case 'U': case 'v': case 'V':
                        printf("8");
                        break;
                    case 'w': case 'W': case 'x': case 'X': case 'y': case 'Y':
                        printf("9");
                        break;
                    default:
                        printf("%c",a);
                }
            }
            else printf("%c",a);
            a=getchar();
        }
        printf("\nVuoi terminare il programma:\n[S]Sì\n[Altro]No\n");
        a=getchar();
        if ((a=='S') || (a=='s')) break;
        getchar();
    }
}