#include<stdio.h>
#define V 5
void init(int arr[][V])
{
int i,j;
for(i=0;i<V;i++)
{
for(j=0;j<V;j++)
{
arr[i][j]=0;
}
}
}
void addEdge(int arr[][V],int src,int dest)
{
arr[src][dest]=1;
}
void printAdjMatrix(int arr[][V])
{
int i,j;
for(i=0;i<V;i++)
{
for(j=0;j<V;j++)
{
printf("%d ",arr[i][j]);
}
printf("\n");
}
}
int main()
{
int adjMatrix[V][V];
init(adjMatrix);
addEdge(adjMatrix,0,1);
addEdge(adjMatrix,0,2);
addEdge(adjMatrix,0,3);
addEdge(adjMatrix,1,3);
addEdge(adjMatrix,1,4);
addEdge(adjMatrix,2,3);
addEdge(adjMatrix,3,4);
addEdge(adjMatrix,4,4);
printf("An undirected graph using adjacency matrix method:\n");
printAdjMatrix(adjMatrix);
return 0;
}
