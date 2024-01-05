#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int timetoint(int h, int m) {
    return (h*60)+m;
}

int inputtimetoint(char *s) {
    int h1,m1;
    sscanf(s,"%d:%d",&h1,&m1);
    if ((h1<0 || h1>24) || (m1<0 || m1>59)) {
        printf("Orario non valido\n"),
        exit(EXIT_FAILURE);
    }
    return timetoint(h1,m1);
}

int insubsstr(char *s, char *t) {
    char *t1=t;
    for (;(*t && *s);s++) {
        if (*s==*t) t++;
        else if(t1!=t) t=t1;
    }
    if (!(*t)) return 1;
    else return 0;
}

int main(int argc, char *argv[]) {
    FILE *fp;
    int function, orario1;
    char line[100]="";
    if ((fp=fopen("palinsesto.txt","r"))==NULL) {
        printf("File non trovato\n");
        exit(EXIT_FAILURE);
    }
    else if (argc==2 && (argv[1][0]>='0' && argv[1][0]<='9')) {
        function=1;
        orario1=inputtimetoint(argv[1]);
    }
    else if (argc==2) function=2;
    else if (argc==3) {
        function=3;
        orario1=inputtimetoint(argv[2]);
    }
    else {
        printf("Uso non corretto del programma rilevato, uso corretto:\n./tv <orario>\n./tv <programma tv>\n./tv <programma tv> <orario>\n");
        exit(EXIT_FAILURE);
    }
    while (fgets(line,sizeof(line),fp)) {
        int h, m, orariot;
        char programma[100]="";
        sscanf(line," %d:%d %[^\n]",&h,&m,programma);
        if (function==1) {
            orariot=timetoint(h,m);
            if (orariot>orario1) printf("%s (%.2d:%.2d)\n",programma,h,m);
        }
        else if (function==2) {
            if (insubsstr(programma,argv[1])) printf("%s (%.2d:%.2d)\n",programma,h,m);
        }
        else {
            orariot=timetoint(h,m);
            if (orariot>orario1 && (insubsstr(programma,argv[1]))) {
                orariot-=orario1;
                h=0;
                m=0;
                for (;orariot>=60;orariot-=60,h++);
                m=orariot;
                printf("%s (%.2d:%.2d)\n",programma,h,m);
            }
        }
    }
    fclose(fp);
}