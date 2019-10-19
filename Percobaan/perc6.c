#include <stdio.h>

int main()
{
    char a;
    printf("Masukkukan nilai anda (A/B/C/D):\t");
    scanf("%c", &a);
    
    if (a == 'A') printf("anda lulus matkul DP dengan nilai A");
    else if (a == 'B') printf("anda lulus matkul DP dengan nilai B");
    else if (a == 'C') printf("anda lulus matkul DP dengan nilai C");
    else if (a == 'D') printf("anda tidak lulus matkul DP karena mendapat nilai D");
    else if (a == 'E') printf("anda tidak lulus matkul DP karena mendapat nilai E");
    else printf("nilai anda tidak terdeteksi\n");
    return 0;
}