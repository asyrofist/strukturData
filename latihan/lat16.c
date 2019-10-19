#include <stdio.h>
#include <math.h>

int main()
{
    int x1, x2, y1, y2, a, b;
    printf("Masukkan nilai koordinat:\n");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    a = y1 - x2;
    b = y1 - y2;

    if (a<0 && b<0)
    {
        printf("%d\n", (-1*a) + (-1*b));
    }

    else if (a<0 && b>0)
    {
        printf("%d\n", (-1*a) + (b));
    }
    
    else if (a>0 && b<0)
    {
        printf("%d\n", a + (-1*b));
    }

    else if (a>0 && b>0)
    {
        printf("%d", a + b);
    }

    else
    {
        if (a == 0)
        {
            if (b < 0)
            {
                printf("%d", -1*b);
            }

            else
            {
                printf("%d", b);
            }
            
            
        }
        
        else if (b == 0)
        {
            if (a < 0)
            {
                printf("%d", -1*a);
            }

            else
            {
                printf("%d", a);
            }
            
            
        }
    }
    
    
    
    
    
}