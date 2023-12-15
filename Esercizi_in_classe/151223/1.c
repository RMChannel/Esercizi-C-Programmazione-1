#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define NOME_FILE "laghi.txt"
#define LLEN 256
#define WLEN 80

void pulisci(char *s) {
    int i;
    for (i=0;s[i]!='\0';i++);
    for (;s[i]<'a' || s[i]>'z';i--);
    i++;
    s[i]='\0';
}

int main (int argc, char *argv[]) {

//controllo apertura file
    FILE *fp;
    
    if ( (fp=fopen(NOME_FILE, "r"))  == NULL  ) {
      
        fprintf(stderr, "Non posso aprire il file %s\n", NOME_FILE);
        exit(EXIT_FAILURE);
    }
    
    /* controllo argomenti: in questo primo file avremo solo 2 
     argomenti, l'eseguibile e il nome del lago. */
    
    if (argc!=2 && argc!=3) {
        fprintf(stderr, "Uso errato: %s\nOr\nUso errato: <number> <symbol +->\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    
/* svolgimento esercizio */
    
    char line[LLEN+1], nome[WLEN+1], regioni[2*WLEN+1];
    int area, alt, prof, n;
    
    while ( fgets(line, sizeof(line), fp) ) { 
    
        n=sscanf(line, "%[^0123456789] %d %d %d %[^\n]", nome, &area, &prof, &alt, regioni);
        pulisci(nome);
        if (argc==2) {
            if (strcmp(argv[1], nome)==0) {
                printf("%s %s\n", nome, regioni);
            }
        }
        
    } //fine while
    
    fclose(fp);
    return 0;
}
