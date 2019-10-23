#include <stdio.h>
#include <math.h>

float penambahan(float, float);
float pengurangan(float, float);
float pembagian(float, float);
float perkalian(float, float);
void tambah();

int main (void)
{
    int operator;
    float num_1, num_2;
    printf("masukkan operator: 1.Penjumlahan, 2. Pengurangan, 3. Pembagian, 4. Perkalian >> \t");
    scanf("%d", &operator);
    printf("Masukkan angka pertama >> \t");
    scanf("%f", &num_1);
    printf("Masukkan angka kedua >> \t");
    scanf("%f", &num_2);
    if (operator == 1)
    {
        printf("Hasil penambahan adalah %f\n", penambahan(num_1, num_2));
    }
    
    else if (operator == 2)
    {
        printf("Hasil pengurangan adalah %f\n", pengurangan(num_1, num_2));
    }

    else if (operator == 3)
    {
        printf("Hasil pembagian adalah %f\n", pembagian(num_1, num_2));
    }
    
    else if (operator == 4)
    {
        printf("Hasil perkalian adalah %f\n", perkalian(num_1, num_2));
    }

    else
    {
        printf("operator tidak ditemukan");
    }


    tambah();
    return(0);
}

void tambah()
{
    printf("halo");
}


float penambahan(float x, float n)
{
    float variabel1, variabel2;
    variabel1 = x;
    variabel2 = n;
    return (variabel1 + variabel2);
}

float pengurangan(float x, float n)
{
    float variabel1, variabel2;
    variabel1 = x;
    variabel2 = n;
    return (variabel1 - variabel2);
}

float pembagian(float x, float n)
{
    float variabel1, variabel2;
    variabel1 = x;
    variabel2 = n;
    return (variabel1 / variabel2);
}

float perkalian(float x, float n)
{
    float variabel1, variabel2;
    variabel1 = x;
    variabel2 = n;
    return (variabel1 * variabel2);
}