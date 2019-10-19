#include <stdio.h>

int main()
{
    int input;
    printf("Masukkan sebuah angka:");
    scanf("%d", &input);

    printf("bilangan yang anda masukkan merupakan\t");
    if (input == 1)
    printf("nilai anda e");
    else if(input > 0)
    {
        printf("bilangan\t");
        if (input%2 == 0)
        printf("genap");
        else
        printf("ganjil");
    }
    return(0);
}