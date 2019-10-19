#include <stdio.h>

int main()
{
    char kelas;
    int jumlah_mahasiswa;
    float rasio_mahasiwa;

    kelas = 'a';
    jumlah_mahasiswa = 40;
    rasio_mahasiwa = 30.0 / 40.0;
    printf("Selamat datang di modul dasar pemrograman\n\n");
    printf("Jumlah mahasiwa DP kelas %c\t\t = %d\n", kelas, jumlah_mahasiswa);
    printf("rasio mahasiwa putra DP kelas %c\t = %.2f \n", kelas, rasio_mahasiwa);

    return 0;
}