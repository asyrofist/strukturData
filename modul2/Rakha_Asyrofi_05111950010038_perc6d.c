#include <stdio.h>
#include <string.h>
int main()
{
    char a[] = "Halo";
    char b[] = "Hai";
    char c[] = "Halo";
    
    if (strcmp(a,b) == 0)
    {
        printf("string a sama dengan b\n");
    }
    else
    {
        printf("string a tidak sama dengan b\n");
    }
    

    if (strcmp(a,c) == 0)
    {
        printf("string a sama dengan c\n");
    }

    else
    {
        printf("string a tidak sama dengan c\n");
    }
    
    return 0;   
}