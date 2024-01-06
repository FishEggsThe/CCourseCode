#include <stdio.h>
#include <stdlib.h>
void silly (int *x);

int main(void)
{
    int x, y;
    x = 10;
    y = 11;
    silly(&x);
    silly(&y);
    printf("x = %d, y = %d\n", x, y);

    return 0;
}

void silly (int *x)
{
    int z;
    z = *x + 2;
    printf("z = %d, *x = %d\n", z, *x);
    *x = 2 * *x;
    printf("z = %d, *x = %d\n", z, *x);
}
