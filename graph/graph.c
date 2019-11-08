#include "stdio.h"
#include "conio.h"

// inisialisai Node
typedef struct Node
  {int data;
   struct Node *kiri;
   struct Node *kanan;
  };

// fungsi tambah
void tambah(struct Node **root,int databaru)
  {
    //   jika node node sebelumnya belum diisi maka dikondisikan kanan dan kiri kosong
   if((*root) == NULL)
   {
    //  buat variable node bernama baru
     struct Node *baru;
    //  masukkan ke vektor
     baru = (struct Node *)malloc(sizeof(struct Node *)); //  baru = new Node;
    //  masukkan variabel baru ke data, kirim dan kanan
     baru->data = databaru;
     baru->kiri = NULL;
     baru->kanan = NULL;
     (*root) = baru;
     (*root)->kiri = NULL;
     (*root)->kanan = NULL;
    //  notifikasi data bertambaha
     printf("Data bertambah!");
   }
  //  kondisi bila ada data baru ditambahkan ke data kanan dan kiri
   else if(databaru < (*root)->data)
     tambah(&(*root)->kiri,databaru);
   else if(databaru > (*root)->data)
     tambah(&(*root)->kanan,databaru);
   else if(databaru == (*root)->data)
     printf("Data sudah ada!");
  }

// fungsi preOrder
void preOrder(struct Node *root)
  {
    // kondisi bila tidak ada data maka maka dianggap null
   if(root != NULL){ printf("%d ",root->data);
   preOrder(root->kiri);
   preOrder(root->kanan);
  }}

// fungsi inOrder
void inOrder(struct Node *root)
  {
    // kondisi bila tidak ada data maka maka dianggap null
   if(root != NULL){ inOrder(root->kiri);
   printf("%d ",root->data);
   inOrder(root->kanan);
  }}

// fungsi postOrder
void postOrder(struct Node *root)
  {
    // kondisi bila tidak ada data maka maka dianggap null
   if(root != NULL){ postOrder(root->kiri);
   postOrder(root->kanan);
   printf("%d ",root->data);
  }}

void main()
{
  // inisilaisasi variabel baru
  int c, data;
  struct Node *pohon,*t;
  pohon = NULL;
  char pil;
  do {
    // beri statement awal untuk menulis input
    printf("1. Tambah\n"); // clrscr();
    printf("2. Lihat Pre-order\n");
    printf("3. Lihat In-order\n");
    printf("4. Lihat Post-order\n");
    printf("5. Keluar\n");
    printf("Silahkan masukkan pilihan anda (1-5)...  ");
    pil=getche();

      // kondisi bila tidak dimasukkan pilihan dengan benar
      if(pil!='1' && pil !='2' && pil !='3' && pil!='4' && pil!='5' )
          printf("\n\nAnda salah mengetikkan inputan...\n");
          else
          {
            // kondisi bila dimasukkan kondisi 1
        if(pil=='1')
        {
          printf("\n");
          printf("\nData baru : ");scanf("%d", &data);
          tambah(&pohon,data);
        }
          else
          {
            // kondisi bila dimasukkan kondisi 2
        if(pil=='2')
        {
          printf("\n");
          if(pohon!=NULL) preOrder(pohon);
          else printf("Masih kosong!");
          getch();
        }
          else
        {
          // kondisi bila dimasukkan kondisi 3
        if(pil=='3')
        {
          printf("\n");
          if(pohon!=NULL) inOrder(pohon);
          else printf("Masih kosong!");
          getch();
        }
          else
        {
          // kondisi bila dimasukkan kondisis4
        if(pil=='4')
        {
          printf("\n");
          if(pohon!=NULL) postOrder(pohon);
          else printf("Masih kosong!");
          getch();
        }}}
        }}}
        // lakukan perulangan ini bila kondisi tidak sama dengan 5
          while(pil!='5');

}
