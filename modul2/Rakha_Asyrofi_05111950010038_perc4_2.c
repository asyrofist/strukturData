#include <stdio.h>

int main()
{
    int i;
    i = 0;

    do
    {
        printf("%d\n", i+1);
        i++;
    } 
    while (i < 5);
    
    return 0;
}