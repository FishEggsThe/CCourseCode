#include <stdio.h>
#include <stdlib.h>

int main()
{
    // printf statements
    printf("Smile Smile!\n");
    printf("Joy\n");
    printf("Gratitude\n");
    printf("Work Hard\n");
    printf("Play Harder\n\n");

    // Declaring variables for future use
    int a, b, c;
    double avg, stv_dev;

    // Asking and receiving values for variables a, b, and c
    printf("Enter an integer value:\n");
    scanf("%d", &a);
    printf("Enter another integer value:\n");
    scanf("%d", &b);
    printf("Enter one more integer value:\n");
    scanf("%d", &c);

    // Calculating the average and printing the info
    avg = (a+b+c)/3.0;
    printf("\nThe average of %d, %d, and %d is %0.2f\n", a, b, c, avg);

    // Calculating the standard deviation and printing the info a well
    stv_dev = sqrt((double)(pow((a - avg), 2) + pow((double)(b - avg), 2) + pow((double)(c - avg), 2)) / 3.0);
    printf("The standard deviation is %0.3f\n", stv_dev);


    // return 0;
    return 0;
}
