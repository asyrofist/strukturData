#include <stdio.h>

int main()
{
    int input;
    printf("Masukkan angka:");
    scanf("%d", &input);

    if(input > 0)
    {
        printf("positif");
    }
    else
    {
        printf("negatif");
    }
    printf("\n");
    return(0);
}