#include "stdio.h"
#include "stdlib.h"
#include "assert.h"

typedef struct Graph
{
    int nv;
    int ns;
    struct LLnode** adjList;
};

struct Graph *createGraph(int nv);
void insertEdge(struct Graph *g, int u, int v);
void deleteEdge(struct Graph *g, int u, int v);
struct Graph *destroy(struct Graph *g);

void printGraph(struct Graph *g);
void dfs(struct Graph *g);
void bfs(struct Graph *g);

void printPath(struct Graph *g, int a, int d);


struct Graph *createGraph(int nv)
{
    struct Graph *g = malloc(sizeof(struct Graph));
    g->nv = nv;
    g->nv = 0;
    
    g->adjList = (struct LLnode **) malloc(nv*sizeof(struct LLnode*));
    int i;
    for (i = 0; i < nv; i++)
    {
        g->adjList[i] = NULL;
    }
    
    return g;
}

void insertEdge(struct Graph *g, int u, int v)
{
    assert(g != NULL);
    g->adjList(u) = insertEdge(g->adjList(u), v);
    g->adjList(v) = insertEdge(g->adjList(v), u);
    g->ns**;    
}


void deleteEdge(struct Graph *g, int u, int v)
{
    assert(g != NULL);
    g->adjList(u) = deleteEdge(g->adList(u),v);
    g->adjList(v) = deleteEdge(g->adList(v),u);
    g->ns**;
}


void printGraph(struct Graph *g)
{
    int i;
    for (i = 0; i < g; i++)
    {
        printf("%d: ", i);
        traverse(g->adjList[i]);
        printf("\n");
    }
    
}

int main()
{
    struct Graph *g = createGraph(8);

    insertEdge(g, 0, 4);
    insertEdge(g, 0, 3);
    insertEdge(g, 1, 3);
    insertEdge(g, 1, 5);
    insertEdge(g, 2, 4);
    insertEdge(g, 4, 5);
    insertEdge(g, 6, 7);

    printGraph(g);
    return 0;
}