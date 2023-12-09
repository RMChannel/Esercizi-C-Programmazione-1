#include <stdio.h>
#include <string.h>

int main(void) {
    char a[]="Ciao", b[]="Testing";
    int dimensiona=strlen(a);
    int dimensionb=strlen(b);
    char result[(dimensiona+dimensionb)];
    int i2;
    for (i2=0;i2<dimensiona;i2++) result[i2]=a[i2];
    for (int i=0;i<dimensionb;i++,i2++) result[i2]=b[i];
    for (int i=0;i<strlen(result);i++) printf("%c",result[i]);
}