#include <stdio.h>

int main(void) {
    char words[100][2]={'\n'};
    char ch;
    int control=0, i=0, i2=0;
    printf("Inserisci due parole, separate da uno spazio: ");
    while ((ch=getchar())!='\n') {
      if (ch==' ' && control==0) {
        i=1;
        control=1;
        i2=0;
        continue;
      }
      words[i2][i]=ch;
      i2++;
    }
    i2=99;
    while (words[i2][1]==0) i2--;
    i=0;
    while (words[i2][1]==words[i][0]) {
        i2--;
        i++;
    }
    if (i2<=0) printf("Sono reverse\n");
    else printf("Non sono reverse\n");
}