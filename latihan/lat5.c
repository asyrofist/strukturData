#include <stdio.h>
#include <string.h>

int main()
{
    char e[100];
    printf("masukkan kalimat:\n");
    gets(e);
    int jumlah = strlen(e);
    if (jumlah <= 100)
    {
        printf("%s", e);
    }
    
    else
    {
        printf("nilai anda tidak terjangkau");
    }
    

}