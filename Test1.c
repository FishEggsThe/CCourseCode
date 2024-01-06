#include <stdio.h>
#include <stdlib.h>

int main()
{
    double test = -3.6175;
    printf("%8.3f\n", test);
    printf("%8.1f\n", test);
    printf("%8.0f\n", test);
    printf("%.2f\n", test);
    printf("########\n");

    int a = 403;
    double b = 201.447;
    double c = -11.2;
    printf("%5d%11.2f%11.3f\n", a, b, c);
    printf("##########################");

    return 0;
}
