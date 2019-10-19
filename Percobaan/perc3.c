#include <stdio.h>

int main()
{
    int panjang, lebar, luas;
    printf("Menghitung luas persegi panjang\n");
    printf("masukkan panjang\t:");
    scanf("%d", &panjang);
    printf("masukkan lebar\t:");
    scanf("%d", &lebar);
    luas = panjang*lebar;
    printf("Luas persegi panjang dengan lebar %d dan panjang %d adalah %d\n", lebar, panjang, luas);
    return(0);
}