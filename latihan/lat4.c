#include <stdio.h>

int main()
{
    int a, b, c;

    printf("masukkan nilai diantara 1 sampai 100:\t");
    scanf("%d %d", &a, &b);
    if (a <= 1 && a <= 100)
    {
        printf("%d", a);
        c = a + b;
        printf("maka penjumlahan nilai anda adalah %d", c);
    }
    else if (b >= 1 && b <= 100)
    {
        printf("%d", b);
        c = a + b;
        printf("maka penjumlahan nilai anda adalah %d", c);
    }
    else 
    {
        printf("nilai anda tidak terjangkau\t");
    }
}