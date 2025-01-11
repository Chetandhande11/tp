#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,k,flag,temp,num,table[10][10]={0};
	char set[20];
	printf("\n Enter the no. of set element: ");
	scanf("%d",&num);
        printf("\n Enter the set elements: ");
	for(i=0;i<num;i++)
	{
		scanf("%s",&set[i]);
	}
	for(i=0;i<pow(2,num);i++)
	{
		temp=i;
		printf("\n");
		for(j=0;j<num;j++)
		{
			table[i][j]=temp%2;
			temp=temp/2;
			printf("%d",table[i][j]);
		}
	}
	printf("\n==============================");
	printf("\n Power set is: ");
	for(i=0;i<pow(2,num);i++)
	{
	       printf("\n{");
	       for(j=0;j<num;j++)
	       {
		  if(table[i][j]==1)
		  
		     printf("%c ",set[j]);
	        }
	       printf("}\n");
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int table[10][10],i,j,numtemp;
	char set[10];
	printf("Enter the limit of set:");
	scanf("%d",&num);
	printf("Enters the elemnts of set \n");
	for(i=0;i<num;i++){
		scanf("%s",set[i]);
	}
	for(i=0;i<pow(2,num),i++){
		temp=i;
		printf("\n");
		for(j=0;j<num;j++)
		{
			table[i][j]=temp%2;
			temp=temp/2;
			printf("%d",table[i][j]);
		}
	}
	printf("\n");
	printf("--------------------------------------------------\n");
	for(i=0;i<pow(2,num),i++){
		printf("\n{")
		for(j=0;j<num;j++)
		{
			if(table[i][j]==1)
			printf("%c",set[j]);
		}
		printf("}\n";)
	}
	
}
