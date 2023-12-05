#include <stdio.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time) {
    if (desired_time>=1305) {
        *departure_time=-1;
        *arrival_time=-1;
    }
    else {
        if ((desired_time-480)<(583-desired_time)) {
            *departure_time=480;
            *arrival_time=616;
        }
        else if ((desired_time-583)<(679-desired_time)) {
            *departure_time=583;
            *arrival_time=712;
        }
        else if ((desired_time-679)<(767-desired_time)) {
            *departure_time=679;
            *arrival_time=811;
        }
        else if ((desired_time-767)<(840-desired_time)) {
            *departure_time=767;
            *arrival_time=900;
        }
        else if ((desired_time-840)<(945-desired_time)) {
            *departure_time=840;
            *arrival_time=968;
        }
        else if ((desired_time-945)<(1140-desired_time)) {
            *departure_time=945;
            *arrival_time=1075;
        }
        else if ((desired_time-1140)<(1305-desired_time)) {
            *departure_time=1140;
            *arrival_time=1280;
        }
        else if (desired_time<1305) {
            *departure_time=1305;
            *arrival_time=1438;
        }
    }
}

int main(void) {
    int h, m, h1, m1, departure_time, arrival_time;
    printf("Inserisci l'orario: ");
    scanf("%d:%d",&h,&m);
    if ((h>24) || (h<0) || (m>59) || (m<0)) {
        printf("L'orario non è corretto, riprovare\n");
        return 0;
    }
    h=(h*60)+m;
    find_closest_flight(h, &departure_time, &arrival_time);
    if (departure_time==-1 && arrival_time==-1) printf("Non ci sono aerei disponibili\n");
    else {
        h=departure_time/60;
        m=departure_time%60;
        h1=arrival_time/60;
        m1=arrival_time%60;
        printf("IL primo aereo disponibile e' quello delle %.2d:%.2d ed arriva alle %.2d:%.2d\n",h,m,h1,m1);
    }
}