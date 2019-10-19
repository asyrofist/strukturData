#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf ("berapa banyak bebek kepada masing?\t");
    scanf("%d", &a);
    printf("berapa banyak sisa bebek?\t");
    scanf("%d", &b);
    if (a <= 100 && b <= 100)
    {
        c = a/b;
        d = a%b;

        printf("masing-masing : %d", c);
        printf("bersisa : %d", d);
    }
    else 
    {
        printf("nilai tidak terjangkau");
    }
    
}