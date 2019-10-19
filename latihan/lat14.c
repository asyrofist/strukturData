#include <stdio.h>

int main()
{
    int x;
    printf("masukkan digit angka?");
    scanf("%d", &x);
    if (x >= 10000)
    {
        printf("puluh ribuan\n");
    }

    else if (x >= 1000)
    {
        printf("ribuan");
    }

    else if (x >= 100)
    {
        printf("ratusan\n");
    }
    
    else if (x >= 10)
    {
        printf("puluhan\n");
    }

    else if (x >= 1)
    {
        printf("satuan\n");
    }

    else
    {
        printf("angka anda tidak terjangkau");
    }

    
    
}