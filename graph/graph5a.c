#include <stdio.h>
#include <stdlib.h>

#define N 5

typedef struct
{
    int item[N];
    int front;
    int rear;
    int count;
} Queue;

void inisialisasi_queue(Queue *q)
{
    q->front = q->rear = q->count = 0;
}

int kosong(Queue *q)
{
    return q->count == 0;
}

int penuh(Queue *q)
{
    return q->count == N;
}

void enqueue(Queue *q, int x)
{
    if (penuh(q))
    {
        printf("Queue penuh!\n");
        exit(1);
    }
    else
    {
        q->item[q->rear] = x;
        q->rear = (q->rear + 1) % N;
        q->count++;
    }
    
}

int dequeue(Queue *q)
{
    int temp;
    if (kosong(q))
    {
        printf("Queue kosong!\n");
        temp = -1;
    }
    else
    {
        temp = q->item[q->front];
        q->front = (q->front + 1) % N;
        q->count--;
    }
    
    return temp;
}
