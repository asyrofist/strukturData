#include <stdio.h>
#include <string.h>
int main()
{
    char a[] = "Halo";
    char b[10];

    strcpy(b,a);
    printf("%s\n", b);
    return 0;   
}