#include <stdio.h>

void main()
{
    int x = 1, y = 2, z;
    printf("x = %d, y = %d\n", x, y);
    z = x, x = y, y = z;
    printf("x = %d, y = %d\n", x, y);
}
