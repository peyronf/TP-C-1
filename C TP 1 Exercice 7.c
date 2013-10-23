# include <stdio.h>

#define PI 3.14

void main()
{
    int rayon, diametre;
    double perimetre, aire;
    printf("Saisir un entier :");
    scanf("%d", &rayon);
    diametre = rayon*2;
    perimetre = 2*PI*rayon;
    aire = PI*rayon*rayon;
    printf("Rayon : %d\nDiametre : %d\nPerimetre : %lf\nAire : %lf", rayon, diametre, perimetre, aire);
}
