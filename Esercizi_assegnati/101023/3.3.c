#include <stdio.h>

int main(void) {
    int a,b,c,d,e;
    printf("Inserisci l'ISBN: ");
    scanf("%3d-%1d-%3d-%5d-%1d",&a,&b,&c,&d,&e);
    printf("GS1 prefix: %d\nGroup indetifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n",a,b,c,d,e);
}