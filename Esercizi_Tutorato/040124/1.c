#include <stdio.h>

int mystrlen(char *s) {
    int n=0;
    for (;*s;s++,n++);
    return n;
}

int raddoppiamento(char *s, char *t) {
    char *s1=s;
    char *sf=s;
    char *t1=t;
    for (;*sf;sf++);
    sf--;
    for (;*s==*t;s++,t++);
    s--;
    if (*s==*t && (s<sf) && (s!=s1) && ((mystrlen(s1)+1)==mystrlen(t1))) {
        int flag=0;
        while ((*t1) && (*s1)) {
            if (*s1!=*t1) {
                if (flag) return 0;
                else {
                    flag=1;
                    t1++;
                }
            }
            else {
                t1++;
                s1++;
            }
        }
        return 1;
    }
    else return 0;
}

int main(int argc, char *argv[]) {
    if (argc!=3) printf("Uso scorretto del programma rilevato, uso corretto:\n./a.exe <parola 1> <parola 2>\n");
    else if (raddoppiamento(argv[1],argv[2])) printf("%s e' il raddoppiamento di %s\n",argv[2],argv[1]);
    else if (raddoppiamento(argv[2],argv[1])) printf("%s e' il raddoppiamento di %s\n",argv[1],argv[2]);
    else printf("Non c'e' nessun raddoppiamento\n");
    return 0;
}