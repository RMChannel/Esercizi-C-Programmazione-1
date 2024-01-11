#include <stdio.h>
#include <stdlib.h>

void rimuovi_duplicati(char *s) {
    int alphabet[26]={0};
    for (;*s;s++) {
        int n;
        if (*s>='A' && *s<='Z') n=*s-'A';
        else if (*s>='a' && *s<='z') n=*s-'a';
        else continue;
        if (!alphabet[n]) alphabet[n]++;
        else {
            for (char *s1=s;*s1;s1++) *s1=*(s1+1);
            s--;
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc!=2) printf("Uso: ./a.out <frase>\n");
    else {
        rimuovi_duplicati(argv[1]);
        printf("%s\n",argv[1]);
    }
}

/*
Questo programma prende in input la stringa da linea di comando (dando errore nel caso fosse assente)
la stringa viene passata alla funzione e viene creato un array di 26 interi che rappresenta l'alfabeto,
ogni volta che viene trovata una lettera (maiuscola o minuscola che sia) viene trovato il suo indice
(nel caso ci sia un carattere diverso, il processo salta al prossimo carattere) e nel caso non sia stata
ancora trovata una lettera corrispondente viene semplicemente incrementato alphabet all'indice della lettera.
Nel caso sia stata già trovata una lettera, allora essa viene rimossa e la stringa viene spostata di una lettera indietro
così da riposizionare tutte le lettere ed s viene decrementato così da ricominciare dalla prossima lettera.
*/