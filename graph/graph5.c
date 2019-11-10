#include <stdio.h>

#define N 5
#define M 1000

void inisialisasi (int a, int Q[])
{
    for (int i = 0; i < N; i++)
    {
        if ((i+1) == a)
        {
            Q[i] = 0;
        }
        else
        {
            Q[i] = M;
        }
        
    }
    
}

void tampil(int data[M], char *judul)
{
    printf("%s = ", judul);
    for (int i = 0; i < N; i++)
    {
        if (data[i] >= M)
        {
            printf("M");
        }
        else
        {
            printf("%d", data[i]);
        }
        printf("\n");
        
        
    }
    
}

void main()
{
    int input[N][N] = {M,1,3,M,M,
                       M,M,1,M,5,
                       3,M,M,2,M,
                       M,M,M,M,1,
                       M,M,M,M,M};

    int beban[N], rute[N] = {0,0,0,0,0};
    int asal, tujuan;

    printf("masukkan node asal :");
    scanf("%d", &asal);
    printf("masukkan node tujuan :");
    scanf("%d", &tujuan);
    
    inisialisasi(asal,beban);
    printf("beban dan rute awal\n");
    tampil(beban, "beban");
    tampil(rute, "rute");
}