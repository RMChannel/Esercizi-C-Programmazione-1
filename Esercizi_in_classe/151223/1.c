#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define NOME_FILE "laghi.txt"
#define LLEN 256
#define WLEN 80

void pulisci(char *s) {
    int i;
    for (i=0;s[i]!='\0';i++);
    for (;(s[i]<'a' || s[i]>'z');i--);
    i++;
    s[i]='\0';
}

int f_subtr(char *s, char *t) {
    for (int i=0;i<strlen(s);i++) {
        int i2, i4=i;
        for (i2=0;i2<strlen(t);i2++) {
            if (s[i4]==t[i2]) i4++;
            else break;
        }
        if (t[i2]=='\0') {
            i=i4;
            while ((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) i--;
            i++;
            int i3=0;
            if (t[i3]==s[i]) return 1;
            else return 0;
        }
    }
    return 0;
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
    
    char line[LLEN+1], nome[WLEN+1], regioni[2*WLEN+1], lago_max[LLEN+1];
    int area, alt, prof, n, maxarea=0;
    
    while ( fgets(line, sizeof(line), fp) ) { 
    
        n=sscanf(line, "%[^0123456789] %d %d %d %[^\n]", nome, &area, &prof, &alt, regioni);
        if (argc==2) {
            pulisci(nome);
            if (strcmp(argv[1], nome)==0) printf("%s %s\n", nome, regioni);
            if (f_subtr(regioni,argv[1])) printf("%s\n", nome);
        }
        else if (argv[2][0]=='+')
            {
                if (alt>atoi(argv[1])) {
                    if (area>maxarea) {
                        maxarea=area;
                        strcpy(lago_max,nome);
                    }
            }
        }
        else if (argv[2][0]=='-') {
            if (alt<atoi(argv[1])) {
                if (area>maxarea) {
                    maxarea=area;
                    strcpy(lago_max,nome);
                }
            }
        }
    } //fine while
    if (argc==3) printf("%d %s\n",maxarea,lago_max);
    fclose(fp);
    return 0;
}