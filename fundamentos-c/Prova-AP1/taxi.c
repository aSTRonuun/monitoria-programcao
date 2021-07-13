#include <stdio.h>

int main (){

    double A = 0, Gc = 0, Ga = 0, Ra = 0, Rgc = 0, Rga = 0;

    scanf("%lf %lf %lf %lf %lf %lf", &A, &Gc, &Ga, &Ra, &Rgc, &Rga);

    double RTA =  A / Ra;
    double RTGC = Gc / Rgc;
    double RTGA = Ga / Rga;
    
    if(A == Gc && Gc == Ga)
        printf("Ga\n");
    else if(RTA < RTGC && RTA < RTGA)
        printf("A\n");
    else if(RTGA < A && RTGA < RTGC)
        printf("Ga\n");
    else if(RTGC < A && RTGC < RTGA)
        printf("Gc\n");
}