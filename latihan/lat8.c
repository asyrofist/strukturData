#include <stdio.h>

int main() {
  int i, j, m, n;
  int matriks[10][10];
  int transpose[10][10];

  printf("Masukkan jumlah baris matriks: ");
  scanf("%d", &m);
  printf("Masukkan jumlah kolom matriks: ");
  scanf("%d", &n);

  printf("Masukkan elemen matriks:\n");
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      scanf("%d", &matriks[i][j]);
      transpose[j][i] = matriks[i][j];
    }
  }

  printf("Hasil transpose matriks:\n");
  for (i = 0; i < n; i ++){
    for(j = 0; j < m; j++){
      printf("%d\t",transpose[i][j]);
    }
    printf("\n");
  }
  return 0;
}