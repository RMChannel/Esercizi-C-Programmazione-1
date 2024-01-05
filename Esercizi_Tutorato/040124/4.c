#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void remove_space(char *s) {
    while (*s) s++;
    while ((*s<'a' || *s>'z') && (*s<'A' || *s>'Z')) {
        *s='\0';
        s--;
    }
}

int main(int argc, char *argv[]) {
    FILE *fp;
    int function;
    if ((fp=fopen("stelle.txt","r"))==NULL) {
        printf("File non trovato\n");
        exit(EXIT_FAILURE);
    }
    else if (argc==2 && atof(argv[1])) function=2;
    else if (argc==2) function=1;
    else if (argc==4 && argv[1][0]=='m') function=3;
    else {
        printf("Uso: ./a.out <stella>\nUso: ./a.out <distanza>\nUso: ./a.out m <distanza A> <distanza B>\n");
        exit(EXIT_FAILURE);
    }
    char line[100]="";
    float minmagn=9999;
    float maxmagn=9999;
    float mindfe=9999;
    float maxdfe=9999;
    char minstella[20]="";
    char maxstella[20]="";
    while (fgets(line,sizeof(line),fp)) {
        float magnitudine, dfe;
        char stella[20]="";
        sscanf(line,"%f %[^0123456789] %f",&magnitudine,stella,&dfe);
        remove_space(stella);
        if (function==1 && !strcmp(stella,argv[1])) {
            printf("%s, magnitudine: %.2f distanza: ",stella,magnitudine);
            if (dfe>10) printf("%.0f",dfe);
            else if (dfe<1) printf("%f",dfe);
            else printf("%.1f",dfe);
            printf(" anni luce\n");
        }
        else if (function==2 && dfe<=atof(argv[1])) printf("%.2f %s\n",magnitudine,stella);
        else if (function==3 && (dfe>atof(argv[2]) && dfe<atof(argv[3]))) {
            if (maxmagn==9999) {
                maxmagn=magnitudine;
                minmagn=magnitudine;
                maxdfe=dfe;
                mindfe=dfe;
                strcpy(maxstella,stella);
                strcpy(minstella,stella);
            }
            else {
                if (magnitudine>maxmagn) {
                    maxmagn=magnitudine;
                    maxdfe=dfe;
                    strcpy(maxstella,stella);
                }
                else if (magnitudine<minmagn) {
                    minmagn=magnitudine;
                    mindfe=dfe;
                    strcpy(minstella,stella);
                }
            }
        }
    }
    if (function==3) printf("%.2f %s (%.2f)\n%.2f %s (%.2f)\n",minmagn,minstella,mindfe,maxmagn,maxstella,maxdfe);
}