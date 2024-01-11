#include <stdio.h>
#include <stdlib.h>

void inverte_parole(char *s, char *z) {
    char *s1=s;
    while (*s1) s1++;
    s1--;
    char *s2=s1;
    while (s2>s) {
        while (*s2!=' ' && s2>s) s2--;
        char *s3=s2;
        if (*s3==' ') s3++;
        for (;s3<=s1;s3++,z++) *z=*s3;
        *z=' ';
        z++;
        while (*s2==' ') s2--;
        s1=s2;
    }
}

int main(int argc, char *argv[]) {
    char z[100]="";
    if (argc!=2) printf("Uso: ./a.out <frase>\n");
    else {
        inverte_parole(argv[1],z);
        printf("%s\n",z);
    }
}

/*
Questo programma prende in input la stringa da linea di comando (dando errore nel caso fosse assente)
e per prima cosa crea due puntatori che partono dalla fine della frase inserita, dopodiché
s2 si occupa di impostare l'inizio parola che arriva ad ogni spazio o inizio stringa, infatti poi si
passa ad s3, che nel caso ci sia lo spazio viene incrementato, ed esso viene usato per copiare in z la parola trovata,
sfruttando s1 come limite.
E in finale s2 viene decrementato finché non trova una lettera e s1 viene impostato ad s2 e si ripete finché s2 è superiore al limite minore dell'input dato.
*/