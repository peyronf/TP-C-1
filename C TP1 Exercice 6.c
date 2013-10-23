# include <stdio.h>

void main()

{
    int entier = 0, le_double = 0, le_triple = 0;
    printf("Choisir un entier :\n");
    scanf("%d", &entier);
    le_double = entier*2;
    printf("Voila le double de ce nombre : %d\n", le_double);
    le_triple = entier*3;
    printf("Voila le triple de cet entier : %d", le_triple);
}
