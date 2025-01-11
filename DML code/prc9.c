#include<stdio.h> 
void main(){ 
int a, b, n, ne=1, i, j, min, cost[10][10], mincost=0, visted[10]={0};            //variable initialization 
printf("\nEnter the no. of vertices="); 
scanf("%d", &n);                                                                   //accepting no. of vertices as input 
printf("\nEnter the adj matrix\n"); 
for(i=1; i<=n; i++){ 
for(j=1; j<=n; j++){ 
scanf("%d", &cost[i][j]);                                        //accepting matrix as input 
if(cost[i][j]==0) 
{ 
cost[i][j]=999; 
} 
} 
} 
visted[1]=1; 
while(ne<n){ 
min=999; 
for(i=1;i<=n;i++) 
{ 
for(j=1; j<=n; j++) 
{ 
if(visted[i]==1){ 
if(cost[i][j]<min){ 
min=cost[i][j]; 
a=i; 
b=j; 
} 
} 
} 
} 
if(visted[a]==0 || visted[b]==0){ 
printf("edge(%d %d)=%d\n",a,b,min);                                        //printing the edges 
mincost=mincost+min; 
}
cost[a][b]=cost[b][a]=999; 
ne++; 
visted[b]=1; 

} 
} 
printf("\nMinimum spanning tree of wt = %d", mincost);             //printing weight of tree 
getch(); 
}
