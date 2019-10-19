#include <stdio.h>

int main()
{
    char nilai;

    printf("masukkan angka anda (1/2/3/4/5/6)");
    scanf("%c", &nilai);

    switch (nilai)
    {
    case '1':
        printf("anda lulus matkul DP dengan nilai e");
        break;
    case '2':
        printf("anda lulus matkul DP dengan nilai c");
        break;
    case '3':
        printf("anda lulus matkul DP dengan nilai e");
        break;
    case '4':
        printf("anda lulus matkul DP dengan nilai d");
        break;     
    case '5':
        printf("anda lulus matkul DP dengan nilai a");
        break;       
    case '6':
        printf("anda lulus matkul DP dengan nilai b");
        break;    
    default:
        printf("nilai tidak terdeteksi");
        break;
    }
    return 0;
}