#include <stdio.h>

#define PI 3.14
void main()
{
    int rayon = 5, DiametreDuCercle = 0;
    double perimetre = 0, AireDuCercle = 0;
    DiametreDuCercle = rayon*2;
    perimetre = 2*PI*rayon;
    AireDuCercle = PI*rayon*rayon;
    printf("rayon : %d\n,Diametre du cercle : %d\n,Perimetre : %lf\n,Aire du cercle : %lf", rayon, DiametreDuCercle, perimetre, AireDuCercle);
}
