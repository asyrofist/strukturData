#include <stdio.h>
#include <math.h>
int main()
{
    float number, a, b;
    printf("masukkan nilai?\t");
    scanf("%f", &number);
    a = floor(number); //flooring
    b = ceil(number); //ceiling
    printf("%f %f", a, b);
}