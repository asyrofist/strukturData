#include <stdio.h>

int main()
{
    char nilai;

    printf("masukkan nilai DP anda (A/B/C/D)");
    scanf("%c", &nilai);

    switch (nilai)
    {
    case 'A':
        printf("anda lulus matkul DP dengan nilai A");
        break;
    case 'B':
        printf("anda lulus matkul DP dengan nilai B");
        break;
    case 'C':
        printf("anda lulus matkul DP dengan nilai C");
        break;
    case 'D':
        printf("anda lulus matkul DP dengan nilai D");
        break;     
    case 'E':
        printf("anda lulus matkul DP dengan nilai E");
        break;       
    default:
        printf("nilai tidak terdeteksi");
        break;
    }
    return(0);
}