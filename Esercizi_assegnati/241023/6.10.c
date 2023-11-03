#include <stdio.h>

int main(void) {
    int dt=1,yt=1,mt=1,df=0,yf=0,mf=0;
    printf("Inserisci una data: ");
    scanf("%d/%d/%d",&mf,&df,&yf);
    if ((df>31) || (df<0) || (mf>12) || (mf<0) || (yf<0)) {
        printf("Valori non riconosciuti, riprovare\n");
        return 0;
    }
    while ((dt!=0) && (mt!=0) && (yt!=0)) {
        printf("Inserisci una data: ");
        scanf("%d/%d/%d",&mt,&dt,&yt);
        if ((dt>31) || (dt<0) || (mt>12) || (mt<0) || (yt<0)) {
        printf("Valori non riconosciuti, riprovare\n");
        continue;
        }
        if ((yt==0) && (mt==0) && (dt==0)) printf("La data più lotana è: %d/%d/%d\n",mf,df,yf);
        else if ((yt<yf) || ((yt==yf) && (mt<mf)) || ((yt==yf) && (mt==mf) && (dt<df))) {
            yf=yt;
            mf=mt;
            df=dt;
        }
    }
}