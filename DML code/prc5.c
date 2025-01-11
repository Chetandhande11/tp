#include<stdio.h>
  void print(int *num, int n)
    {
        int i;
            for ( i = 0 ; i < n ; i++)
            printf("%d ", num[i]);
            printf("\n");
    }

   int main()
    {
        int num[10];  
        int temp; 
        int i, n, j;

        printf("\nHow many number you want to enter: ");
        scanf("%d", &n);
         
        printf("\nEnter a list of numbers to see all permutions:\n");
        for (i = 0 ; i < n; i++)
        scanf("%d", &num[i]);
        
        printf("\n Permutations are:");
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n-1; j++)
            {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
                print(num, n);
            }
        }
       return 0;
    }
//    #include<stdio.h>
//    void print(int *num,int n)
//    {
//    	int i=0;
//    	for(i=0;i<n;i++)
//    	{
//    		printf("%d ",num[i]);
//    		printf("\n");
//		}
//		
//	}
//	int main()
//	{
//		int temp,i,j,n,num[10];
//		printf("Enter no");
//		scanf("%d",&n);
//		printf("Enter nos\n");
//		{
//			for(i=0;i<n;i++)
//			{
//				scanf("%d",&num[i]);
//			}
//		}
//	    for(i=0;i<n;i++)
//	    {
//	    	for(j=0;j<n-1;j++)
//	    	{
//	    		temp=num[j];
//	    		num[j]=num[j+1];
//	    		num[j+1]=temp;
//	    		print(num,n);
//			}
//		}
//		return 0;
//	}

