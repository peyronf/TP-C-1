#include<stdio.h>

void main()
{
    double x=10864, y=18817, nb1, nb2, nb3, resultat;
    nb1=9*x*x*x*x;
    nb2=y*y*y*y;
    nb3=2*y*y;
    resultat=nb1+nb2+nb3;
    printf("    nb1=%lf\n    nb2=%lf\n    nb3=%lf\n    Resultat=%lf", nb1, nb2, nb3, resultat);
}
