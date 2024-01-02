#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int instring(char *s, char *t) {
    char *t1=t;
    for (;(*s && *t);s++) {
        if (*s==*t) t++;
        else if (t1!=t) t=t1;
    }
    if (!(*t)) return 1;
    else return 0;
}

int main(int argc, void *argv[]) {
    FILE *fp;
    int function;
    if ((fp=fopen("montagne.txt","r"))==NULL) {
        printf("File non trovato\n");
        exit(EXIT_FAILURE);
    }
    else if (argc==2) function=1;
    else if (argc==3 && atoi(argv[1]) && atoi(argv[2])) function=2;
    else {
        printf("Uso scorretto del programma rilevato, uso corretto:\n./a.out <montagna>\n./a.out <Paese>\n./a.out <numero> <numero>\n");
        exit(EXIT_FAILURE);
    }
    char line[1000]="";
    while (fgets(line,sizeof(line),fp)) {
        char montagna[20]="";
        char paesi[20]="";
        int h, n;
        sscanf(line,"%d %[^:]: %d m %[^\n]",&n,montagna,&h,paesi);
        if (strlen(montagna)) {
            if (function==1) {
                if (!strcmp(montagna,argv[1])) printf("%d m\n",h);
                else if (instring(paesi,argv[1])) printf("%s\n",montagna);
            }
            else {
                if (h>atoi(argv[1]) && h<atoi(argv[2])) printf("%s\n",montagna);
            }
        }
    }
}