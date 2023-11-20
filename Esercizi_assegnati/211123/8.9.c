#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    char letters[10][10], letter='A';
    for (int i=0;i<10;i++) {
        for (int i2=0;i2<10;i2++) {
            letters[i][i2]='.';
        }
    }
    int x=0, y=0, n, flag=0;
    while (1) {
        letters[x][y]=letter;
        letter++;
        n=(rand())%4;
        switch (n) {
            case 0:
                if ((y-1)>=0 && (letters[x][(y-1)]=='.')) {
                    y--;
                    break;
                }
            case 1:
                if ((y+1)<10 && (letters[x][(y+1)]=='.') ) {
                    y++;
                    break;
                }
            case 2:
                if ((x-1)>=0 && (letters[(x-1)][y]=='.')) {
                    x--;
                    break;
                }
            case 3:
                if ((x+1)<10 && (letters[(x+1)][y]=='.')) {
                    x++;
                    break;
                }
            default:
                flag=1;
                break;
        }
        if (flag || letter==('Z'+1)) break;
    }
    for (int i=0;i<10;i++) {
        for (int i2=0;i2<10;i2++) {
            printf("%c ",letters[i][i2]);
        }
        printf("\n");
    }
}