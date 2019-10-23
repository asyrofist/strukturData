#include <stdio.h>

int main()
{
    int input;
    printf("Masukkan sebuah angka:");
    scanf("%d", &input);

    printf("bilangan yang anda masukkan merupakan\t");
    if (input == 0)
    printf("angka 0");
    else if(input > 0)
    {
        printf("bilangan");
        if (input%2 == 0)
        printf("genap positif");
        else
        printf("ganjil positif");
    }
    else
    {
        printf("bilangan");
        if (input%2 == 0)
        printf("genap negatif");
        else
        printf("ganjil negatif");
    }
    printf("\n");
    return(0);
}