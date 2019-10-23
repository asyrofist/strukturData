#include <stdio.h>

int main()
{
    int a, b;
    double c;
    scanf("%d %d", &a, &b);
    if (b!=0)
    {
        c = (double)a/b;
        printf("%lf", c);
    }
    else
    {
        printf("anda membagi dengan 0\n");
    }
    
    return 0;
}