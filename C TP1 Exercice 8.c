# include <stdio.h>

void main()
{
    float x_A, y_A, x_B, y_B, perimetre, surface;
    printf("Saisir les coordonnees (x,y) de A :\n");
    scanf("%f", &x_A);
    scanf("%f", &y_A);
    printf("Saisir les coordonnees (x,y) de B :\n");
    scanf("%f", &x_B);
    scanf("%f", &y_B);
    perimetre = ((x_B-x_A)+(y_B-y_A))*2;
    surface = (x_B-x_A)*(y_B-y_A);
    printf("Le perimetre est egale a : %f\nLa surface est egale a : %f", perimetre, surface);
}
