#include <stdio.h>

int main()
{
    char arr[10];

    while (1)
    {
        gets(arr);
        printf("-- %s\n", arr);
    }
    return 0;   
}