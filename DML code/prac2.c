#include<stdio.h>
int main()
{
    int a[5],b[5],c[7],fl=0,ch;
    char ans;
    int i,j,n,m,k,x;
    printf(" Enter limit of set A= ");

    scanf("%d",&n);
	
    printf(" Enter value of set A= ");

    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
    printf(" Set A:{");

    for(i=0;i<n;i++){
	
    printf("%d,",a[i]);}
	 
    printf("}\n");
    
    printf(" Enter limit of setB= ");

    scanf("%d",&m);

    printf(" Enter value of set B= ");

    for(j=0;j<m;j++){
	
    scanf("%d",&b[j]);}
	 
printf(" Set B:{");

    for(j=0;j<m;j++){

    printf("%d,",b[j]); 
	}
	
    printf("}\n");
	
    do{
	  	   printf("\n MENU For Set Operations\n");
           printf("\n1.Intersection\n2.Union\n3.A-B\n4.B-A\n5.Symmetric Difference\n6.Exit\n Enter ur choice=");
	
	   scanf("%d",&ch);
		
      switch(ch)
      {
		 case 1:   k=0;
	                 for(i=0;i<n;i++)
                                {
		
                                  for(j=0;j<m;j++)
		
                                   {
		
                                    if(a[i]==b[j])
               			            {   
		
                                      c[k]=a[i];
		
                                      k++;
                                     }
		
                                    }
	
                                 }
	
	                  printf("\nIntersection of A nd B:{");
   
                           for(i=0;i<k;i++)

       	                   {
		         
                             printf("%d,",c[i]);
	           
                           }
		 
                           printf("}\n");
		  
                           break;
	  
                 
                 case 2:  k=0;
			x=0;
			for(i=0;i<n;i++)
			 {
		 c[x]=a[i];
		 x++;
			 }
			 k=x;
			for(i=0;i<n;i++)
			 {
		fl=0;
		for(j=0;j<m;j++)
		 {
		 if(a[j]==b[i])
			{
			 fl=0;
			 break;
			}
		 else
			 fl=1;
		 }
		if(fl==1)
		 {
		  c[k]=b[i];
		  k++;
		 }
			 }
			 printf("\n Union of A nd B:{");
                         for(i=0;i<k;i++)
	                  {  
		         printf("%d,",c[i]);
	                   }
		            printf("}\n");
			 break;
	  case 3: k=0;
		  for(i=0;i<n;i++)
		 {
		  fl=0;
		 for(j=0;j<m;j++)
			{
		  if(a[i]==b[j])
		  {
			fl=0;
			break;
		}
		  else
			{
			 fl=1;
			}
		  }
		  if(fl==1)
			{
			 c[k]=a[i];
			 k++;
			}
		 }
		  printf("\nDifference is A-B:{");
                  for(i=0;i<k;i++)
	            {
		         printf("%d,",c[i]);
	            }
		  printf("}\n");
		  break;
	  case 4:k=0;
	  for(i=0;i<n;i++)
	 {
	  fl=0;
	  for(j=0;j<m;j++)
		{
			if(b[i]==a[j])
			{
		 fl=0;
		break;
		}
		  else
			 fl=1;
		  }
		  if(fl==1)
			{
			 c[k]=b[i];
			 k++;
			}
		 }
		 printf("\n Difference is B-A:{");
                 for(i=0;i<k;i++)
	            {
		         printf("%d,",c[i]);
	            }
		  printf("}\n");
		 break;

	case 5:k=0;
	  for(i=0;i<n;i++)
		{
			fl=0;
		  for(j=0;j<m;j++)
			 {
			 if(a[i]==b[j])
		 {
			fl=0;
			break;
		}
		  else
			{
			 fl=1;
			}
		  }
		  if(fl==1)
			{
			 c[k]=a[i];
			 k++;
			}
		 }
	 for(i=0;i<m;i++)
	 {
	  fl=0;
	  for(j=0;j<n;j++)
		{
		 if(b[i]==a[j])
		  {
			 fl=0;
			 break;
		  }
		  else
			fl=1;
		 }
		  if(fl==1)
			{
			 c[k]=b[i];
			 k++;
			}
		 }
		 printf("\n Symmetric Difference:{");
                 for(i=0;i<k;i++)
	            {
		         printf("%d,",c[i]);
	            }
		  printf("}\n");
		 break;
	  case 6:
	        break;
	 }  
	  
	 } while(ch<=6);
	 return 0;
	 }



