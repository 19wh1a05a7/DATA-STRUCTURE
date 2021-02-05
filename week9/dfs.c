#include<stdio.h>
#include<stdlib.h>
 int source,v,E,time,visited[20],g[20][20];
void dfs(int i)
{
int j;
visited[i]=1;
printf("%d->",i+1);
for(j=0;j<v;j++)
{
if(g[i][j]==1&&visited[j]==0)
dfs(j);
}
}
int main()
{
int i,j,v1,v2;
printf("\t\t\tGraphs\n");
printf("Enter the no of edges:");
scanf("%d",&E);
printf("Enter the no of vertices:");
scanf("%d",&v);
for(i=0;i<v;i++)
{
	for(j=0;j<v;j++)
	g[i][j]=0;
}
for(i=0;i<E;i++)
{
	printf("Enter the edges (format: v1 v2) : ");
	scanf("%d%d",&v1,&v2);
	g[v1-1][v2-1]=1;
}
for(i=0;i<v;i++)
{
	for(j=0;j<v;j++)
	printf("%d",g[i][j]);
	printf("\n");
}
printf("Enter the source:  ");
scanf("%d",&source);
dfs(source-1);
return 0;
}
  


