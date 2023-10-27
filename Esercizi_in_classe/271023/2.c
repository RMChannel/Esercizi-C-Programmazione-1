#include <stdio.h>

int main(void) {
    int g,m,result;
    printf("Inserisci la data nel formato GG/MM: ");
    scanf("%d/%d",&g,&m);
    result=g;
    for (int i=2;i<=m;i++) {
        switch (i) {
            case 3: case 5: case 7: case 8: case 10: case 12:
                result+=31;
                break;
            case 2:
                result+=28;
                break;
            default:
                result+=30;
        }
    }
    printf("%d\n",result);
}