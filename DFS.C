#include<stdio.h>
#include<string.h>
#define MAX 10
#define INF 9999
#define NIL -1

int adjacent[MAX][MAX],parent[MAX],distance[MAX],nov;
char color[MAX][15];
void DFS()
{
    int i;
    for(i=0;i<nov;i++){
        strcpy(color[i], "White");
        parent[i]=NIL;

    }
    time=0;

    for(i=0;i<nov;i++){
        if(stcmp(color[i],"White")==0){
            DFS_VISIT(i);
        }
    }
}
void DFS_VISIT(int u)
{
    time =time+1;
    distane[u]=time;
    strcpy(color[u],"Gray");
    int v;
    for(v=0;v<nov;v++){
        if(adjancent[u][v]==1){
            if(strcmp(color[v],"White")==0){
                parent[v]=u;
                DFS-VISIT(v);
            }
        }
    }
    strcpy(color[u],"Black");
    time = time+1;
    finaltime[u]=time;
}
int main()
{
    int i,j;
    printf("Enter Number of Vertex: ");
    scanf("%d",&nov);

    printf("Enter 1 if it is adjacent to next or enter 0 \n");
    for(i=0;i<nov;i++)
    {
        for(j=0;j<nov;j++)
        {
            printf("Adjacency between %d and %d : ",i,j);
            scanf("%d",&adjacent[i][j]);
        }
    }

    for(i=0;i<nov;i++)
    {
        for(j=0;j<nov;j++)
        {
            printf("%d\t", adjacent[i][j]);
        }
        printf("\n");
    }

    return 0;
}
