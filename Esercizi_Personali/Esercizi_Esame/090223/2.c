#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, void *argv[]) {
    FILE *fp;
    int function;
    if ((fp=fopen("fiumi.txt","r"))==NULL) {
        printf("File non trovato\n");
        exit(EXIT_FAILURE);
    }
    if (argc<=1 || argc>3) {
        printf("Uso scorretto rilevato\nUso corretto:\n./fiumi <numero int>\n./fiumi <fiume>\n./fiumi <regione> <regione>\n");
        return 1;
    }
    if (argc==2 && atoi(argv[1])) function=1;
    else if (argc==3) function=3;
    else function=2;
    char line[1000]="";
    while (fgets(line,sizeof(line),fp)) {
        int n=0;
        char fiume[100]="";
        char regioni[100]="";
        sscanf(line,"%d %s %[^\n]s",&n,fiume,regioni);
        if (function==1) {
            if (n>=(atoi(argv[1]))) printf("%s %d\n",fiume,n);
        }
        else if (function==2) {
            if (!strcmp(fiume,argv[1])) {
                char *s=regioni;
                for (;*s;s++) {
                    if ((*s>='a' && *s<='z') || (*s>='A' && *s<='Z') || *s=='-') printf("%c",*s);
                    else if (*s==',') printf("\n");
                }
                printf("\n");
            }
        }
        else {
            char *s=regioni;
            char *t=argv[1];
            char *z=argv[2];
            for (;(*s && *t);s++) {
                if (*s==*t) t++;
                else if (t!=argv[1]) {
                    t=argv[1];
                    s--;
                }
            }
            s=regioni;
            for (;(*s && *z);s++) {
                if (*s==*z) z++;
                else if (z!=argv[2]) {
                    z=argv[2];
                    s--;
                }
            }
            if (!(*t) && !(*z)) printf("%s\n",fiume);
        }
    }
}