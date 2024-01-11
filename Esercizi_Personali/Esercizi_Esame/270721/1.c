#include <stdio.h>
#include <stdlib.h>

void substitute(char *s1, char *s2, int m) {
    s1+=m-1;
    char *s11=s1;
    char *s22=s2;
    char *s1f=s1;
    for (;*s1f;s1f++);
    for (;(*s22 || *s11);s11++,s22++);
    if ((s11>s1f)) return;
    for (;*s2;s1++,s2++) *s1=*s2;
}

int main(int argc, char *argv[]) {
    if (argc!=4) printf("Uso corretto: ./a.out <1°parola> <2°parola> <int>\n");
    else {
        substitute(argv[1],argv[2],atoi(argv[3]));
        printf("%s\n",argv[1]);
    }
} 