#include <stdio.h>
int main()
{
	int arr[5],search,low,high,mid,i;
	
	printf("Enter the sorted array elements: ");
	for(i=0;i<5;i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Sorted Elements Are: \n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("\nEnter the value that you want search in array :");
	scanf("%d",&search);
	low=0;
	high=9;
	
	while (low<=high)
	{
		mid=low+high/2;
		if(arr[mid]==search)
		{
		printf("\n%d found in array at position %d ",search,mid);
		break;
		}
		else if(arr[mid]<search)
		low=mid+1;
		else if(arr[mid]>search)
		high=mid-1;
		else
		printf("Value Not Found!!!");
	}

	
	return 0;
}


