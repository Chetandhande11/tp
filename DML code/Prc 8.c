#include<stdio.h>
void main()
{
int a, b, n, ne=1, i, j, min, cost[10][10], mincost=0;
printf("\nEnter the no of vertices:");
scanf("%d",&n);
printf("\nEnter the adj Matrix\n");
for(i=1; i<=n; i++){
for(j=1; j<=n; j++){
scanf("%d",&cost[i][j]);

if(cost[i][j]==0){
cost[i][j]=999;
}
}
}
while(ne<n){
min=999;
for(i=1;i<=n;i++){
for(j=1;j<=n;j++){
if(cost[i][j]<min){
min=cost[i][j];
a=i;
b=j;
}
}
}
printf("Edge(%d %d)=%d\n",a,b,min);
mincost=mincost+min;
cost[a][b]=cost[b][a]=999;
ne++;
}
printf("\nMinimum spanning Tree of wt=%d", mincost);
}
#include<stdio.h>
int main()
{
	int cost[10][10],n,ne=0,min,mincost=0,a,b;
	printf("Enter Vertices");
	scanf("%d",&n);
	printf("Enter adj matrix(weight of edges");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0)
			cost[i][j]=999;
		}
	}
	while(ne<n){
		min=999;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(cost[i][j]<min)
				{
					min=cost[i][j];
					a=i;
					b=j;
				}
			}
		}
		printf("Edge(%d%d)=%d",a,b,min);
		mincost=mincost+min
		cost[a][b]=cost[b][a]=999;
		
	}
	printf("Minimum Spanning Tree :%d",mincost);
	return 0;
}
