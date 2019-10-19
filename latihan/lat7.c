#include <stdio.h>

int main()
{
    float a, b, c;
    printf("masukkan nilai alas & tinggi?\t");
    scanf("%f %f",&a, &b);
    if (a <=100 && b <= 100)
    {
        c = (a*b)/2;
        printf("maka nilainya %f",c);
    }

    else
    {
        printf("nilai anda tidak terjangkau");
    }
    

}