#include <stdio.h>
#include <stdlib.h>
#include <malloc.h> 

// inisialisassi node
struct node
{
    int data;
    struct node *next;
};

// inisialisasi function
void read_graph(struct node *ad[], int no_of_nodes);
void print_graph(struct node *ad[], int no_of_nodes);

void main()
{
    // inisilisasi variable baru
    int i,j,k,nodes;
    // masukkan nilai node
    printf("enter the nodes");
    scanf("%d", &nodes);
    // pemberian node
    struct node *adj[nodes];
    for (i=0; i<nodes; i++)
    {
       adj[i] = NULL;
    }
    // pembacaan node
    read_graph(adj,nodes);
    print_graph(adj,nodes);
    int a = 0;
}

// fungsi membaca node
void read_graph(struct node *ad[], int no_of_nodes)
{
    // inisialisasi variabel
    struct node *new_node;
    int i, j, k, val;
    // perulangan sesuai node yang diinginkan
    for (i=0; i<no_of_nodes; i++)
    {
        struct node *last = NULL;
        // masukkan nilai sesuai dengan tetangganya
        printf("\n");
        printf("\nenter the number of neighbour of %d",i++);
        scanf("%d", &k);
        // perulangan sesuai dengan nilai yang dimasukkan
        for (j = 0; j < k; j++)
        {
            printf("\nEnter the value of %d neighbour of %d",j++);
            scanf("%d",&val);
            // masukkan ke variable baru
            new_node=(struct node *)malloc(sizeof(struct node *));
            new_node->data=val;
            new_node->next=NULL;
            // jika berisi nol maka biarkan, bila tidak lanjutkan ke node lainnya
            if (ad[i] == NULL)
            {
                ad[i]=new_node;
            }
            else
            {
                last->next=new_node;
            }
            // hasil akhir berupa nilai terakhir dari node
            last=new_node;
            
        }
        
    }
    
}
// fungsi perintah mengeprint graph
void print_graph(struct node *ad[], int no_of_nodes)
{
    struct node *ptr = NULL;
    int i,j;
    // lakukan perulangan sampai ke node terakhir
    for (i = 0; i < no_of_nodes; i++)
    {
        ptr = ad[i];
        // lakukan pengurutan sesuai dengan perulangan.
        printf("\n");
        printf("\nThe neighbours of %d are :", i+1);
        // lakukan perulangan bila nilai masih kosong
        while (ptr != NULL)
        {
            printf("%d", ptr->data);
            ptr = ptr->next;
        }
        
    }
    
}
