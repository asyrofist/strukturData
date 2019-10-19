#include <stdio.h>
#include <math.h>

double scale(double, int);

int main (void)
{
    double num_1; int num_2;

    printf("enter real number >>");
    scanf("%f", &num_1);

    printf("enter integer number >>");
    scanf("%d", &num_2);

    printf("result of call to functio scale is %f\n", scale(num_1, num_2));
    return(0);
}

double scale(double x, int n)
{
    double scale_factor;
    scale_factor = pow(10,n);
    return (x*scale_factor);
}