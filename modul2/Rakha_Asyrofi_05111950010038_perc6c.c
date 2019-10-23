#include <stdio.h>
#include <string.h>
int main()
{
    char a[] = "Halo";
    char b[] = "kawan";
    char c[20];
    
    strcpy(c,a);
    strcat(c,b);
    printf("%s\n", c);
    return 0;   
}