#include <stdio.h>
#define MAX 4
void input(int *, int *);
int * confronto(int *, int *, int *);
void output(int *, int *);

int main(void) {
    int ar1[MAX], ar2[MAX], *ar3, count=0;
    input(ar1, ar2);
    ar3=confronto(ar1,ar2,&count);
    output(ar3,&count);
}

void input(int *ar1, int *ar2) {
    for (int i=0;i<MAX;i++) {
        printf("Inserisci il %d elemento dell'array 1: ",(i+1));
        scanf("%d",&ar1[i]);
    }
    for (int i=0;i<MAX;i++) {
        printf("Inserisci il %d elemento dell'array 2: ",(i+1));
        scanf("%d",&ar2[i]);
    }
}

int * confronto(int *ar1, int *ar2, int *count) {
    int i3=0;
    static int ar3[MAX];
    for (int i=0;i<MAX;i++) {
        for (int i2=0;i2<MAX;i2++) {
            if (ar1[i]==ar2[i2]) {
                ar3[i3]=ar1[i];
                i3++;
            }
        }
    }
    *count=i3;
    return ar3;
}

void output(int *ar3, int *count) {
    printf("Questi sono gli elementi in comune: ");
    for (int i=0;i<*count;i++) printf("%d ",ar3[i]);
    printf("\n");
}