#include <stdio.h>

int main(void) {
    int score=0;
    while (1) {
        char c='a';
        printf("Inserisci una parola: ");
            while (c!='\n') {
                scanf("%c",&c);
                switch(c) {
                    case 65: case 97: case 69: case 101: case 73: case 105: case 76: case 108: case 78: case 110: case 79: case 111: case 82: case 114: case 83: case 115: case 84: case 116: case 85: case 117:
                        score+=1;
                        break;
                    case 68: case 100: case 71: case 103:
                        score+=2;
                        break;
                    case 66: case 98: case 67: case 99: case 77: case 109: case 80: case 112:
                        score+=3;
                        break;
                    case 70: case 102: case 72: case 104: case 86: case 118: case 87: case 119: case 89: case 121:
                        score+=4;
                        break;
                    case 75: case 107:
                        score+=5;
                        break;
                    case 74: case 106: case 88: case 120:
                        score+=8;
                        break;
                    case 90: case 122: case 81: case 113:
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