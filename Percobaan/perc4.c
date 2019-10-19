#include <stdio.h>

void main()
{
    float a;
    printf("Masukkukan angka lebih dari 2:\t");
    scanf("%f", &a);
    if (a > 2)
    {
        //statement yang akan dieksekusi
        printf("maka nilai anda adalah %f, sesuai ekspetasi", a);
    }
    return 0;
}