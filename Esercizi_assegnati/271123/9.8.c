#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRUE 1
#define FALSE 0

int roll_dice(void);
int play_game(void);

int main(void) {
    srand(time(NULL));
    int play=1, win=0, lose=0;
    while (play) {
        int game=play_game();
        char scelta;
        if (game) {
            printf("Hai vinto!\n");
            win++;
        }
        else {
            printf("Hai perso...\n");
            lose++;
        }
        printf("Vuoi giocare ancora?\n[S]Si\n[N]No\n");
        scelta=getchar();
        if (scelta!='S' && scelta!='s') {
            play=0;
            printf("Numero di partite vinte: %d\nNumero di partite perse: %d\n",win,lose);
        }
        else while((scelta=getchar())!='\n');
    }
}


int play_game(void) {
    int firstthrow=TRUE, point=0;
    while (TRUE) {
        int tiro=roll_dice();
        printf("Hai tirato: %d\n",tiro);
        if (firstthrow && (tiro==7 || tiro==11)) return TRUE;
        else if (firstthrow && (tiro==2 || tiro==3 || tiro==12)) return FALSE;
        else firstthrow=FALSE;
        if (point==FALSE) point=tiro;
        else if (point!=0 && tiro==point) return TRUE;
        else if (tiro==7) return FALSE;
    }
}

int roll_dice(void) {
    int d1=(rand()%6)+1, d2=(rand()%6)+1;
    return d1+d2;
}