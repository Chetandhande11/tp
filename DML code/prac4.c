#include<stdio.h>
int main()
{
	int decimal,bin[10],oct[5],hex[10],ch,j,i;

	do {
		printf("\nMENU For Number System\n");
		printf("\n 1.Decimal to Binary\n 2.Decimal to Octal\n 3.Decimal to Hexadecimal\n 4.Binary to Decimal\n 5.Binary to Octal\n 6.Binary to Hexadecimal\n 7.Exit\n");
		printf("Enter the choice: ");
     	scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("Enter The Decimal no: ");
                    scanf("%d",&decimal);
			printf("The Decimal to Binary conversion will be:");
			    i=0;
			     while(decimal>0){
		            bin[i]=decimal%2;
		            i++;
			     	decimal=decimal/2;
				 }
				 for(j=i-1;j>=0;j--){
				 	printf(" %d",bin[j]);
				 }
			
				break;
			case 2: printf("Enter The Decimal no: ");
                	scanf("%d",&decimal);
			printf("The decimal to Octal conversion will be:");
			       i=0;
			       while(decimal>0)
			       {
			       	oct[i]=decimal%8;
			       	i++;
			       	decimal=decimal/8;
				   }
				   for(j=i-1;j>=0;j--){
				   	printf(" %d",oct[j]);
				   }
				break;
			case 3:
			printf("Enter The Decimal no: ");
	                scanf("%d",&decimal);
	                printf("The Decimal to Hexadecimal conversion will be:");
			        i=0;
			        while(decimal!=0){
			        	hex[i]=decimal%16;
			        	i++;
			        	decimal=decimal/16;
					}
					for(j=i-1;j>=0;j--){
						if(hex[j]<=9)
					      printf(" %d",hex[j]);
			            else
					       printf(" %c",hex[j]+55);
				     	}
			    break;
		}
		
	}while(ch!=7);
	return 0;
}
