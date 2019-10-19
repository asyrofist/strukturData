#include <stdio.h>

int main()
{
    int input;
    printf("Masukkan angka:");
    scanf("%d", &input);

    if(input > 0)
    {
        if (input%2 == 0)
        printf("%d",input);
        else
        printf("nilai anda tidak terjangkau");
    }
    printf("\n");
    return(0);
}