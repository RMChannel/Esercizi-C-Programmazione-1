#include <stdio.h>

int main(void) {
    int score=0;
    while (1) {
        char c='a';
        printf("Inserisci una parola: ");
            while (c!='\n') {
                scanf("%c",&c);
                switch(c) {
                    case 'A': case 'a': case 'E': case 'e': case 'I': case 'i': case 'L': case 'l': case 'N': case 'n': case 'O': case 'o': case 'R': case 'r': case 'S': case 's': case 'T': case 't': case 'U': case 'u':
                        score+=1;
                        break;
                    case 'D': case 'G': case 'd': case 'g':
                        score+=2;
                        break;
                    case 'B': case 'b': case 'C': case 'c': case 'M': case 'm': case 'P': case 'p':
                        score+=3;
                        break;
                    case 'F': case 'f': case 'H': case 'h': case 'V': case 'v': case 'W': case 'w': case 'Y': case 'y':
                        score+=4;
                        break;
                    case 'K': case 'k':
                        score+=5;
                        break;
                    case 'J': case 'X': case 'j': case 'x':
                        score+=8;
                        break;
                    case 'Q': case 'Z': case 'q': case 'z':
                        score+=10;
                        break;
                    case 10: break;
                    default:
                        printf("\nCarattere non valido rilevato\n");
                }
            }
            printf("Punteggio: %d\nVuoi ripetere il programma?\n[S]Sì\n[Altro]No\n", score);
            c=getchar();
            getchar();
            if (c!=83 && c!=115) break;
    } 
}