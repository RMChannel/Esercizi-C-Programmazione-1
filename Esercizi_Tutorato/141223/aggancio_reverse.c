#include <stdio.h>

int aggianco_inverso(char *s, char *t, char *z) {
    
    return 0;
}

int main(int argc, char *argv[]) {
    if (argc!=3) {
        printf("Utilizzo: subreverse <1°parola> <2°parola> <3°parola>\n");
        return 0;
    }
    if (aggianco_inverso(argv[1],argv[2],argv[3])) printf("Si\n");
    else printf("No\n");
}

/*
Siano s e t due stringhe. Sia s’ il più lungo suffisso di s che compare, in ordine inverso, come prefisso di t. Sia t’ tale prefisso di t. Ad esempio se s=torre e t=erba, allora s’=re e t’=er. Una terza stringa z si dice aggancio inverso di s e t se z si ottiene togliendo s’ e t’, rispettivamente da s e t, e unendo le parti rimanenti.
 
Ad esempio, torba è un aggancio inverso di torre e erba.
 
Si scriva una funzione int aggancio_inverso (char *s, char *t, char *z) che prenda in input tre stringhe: s, t e z e ritorni 1 se z è l’aggancio inverso di s e t, 0 altrimenti.
 
Si usi la funzione in un programma che prenda le tre stringhe s, t e z dalla linea di comando e dica se z è l’aggancio inverso di s e t.
 
Esempi di esecuzione:
  % ./a.out torre erba torba
  torba  e‘ l’aggancio inverso di torre e erba
 
  % ./a.out torre erba torbaccia
  torbaccia non e‘ l’aggancio inverso di torre e erba
 
Attenzione: Il programma può usare solo le librerie <stdio.h> e <stdlib.h>.
*/