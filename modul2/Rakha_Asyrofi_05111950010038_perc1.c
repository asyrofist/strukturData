#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (b!=0)
    {
        printf("%d", a/b);
    }
    else
    {
        printf("anda membagi dengan 0\n");
    }
    
    return 0;
}