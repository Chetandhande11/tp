#include<stdio.h>
int main()
{
    int a,b,c;
	printf("Enter the no. for a and b: ");
	scanf("%d%d",&a,&b);
	c=a&b;
	printf("The logical AND of %d and %d is %d \n",a,b,c);
	c=a|b;
	printf("The logical OR of %d and %d is %d \n",a,b,c);
	c=a^b;
	printf("The logical XOR of %d and %d is %d \n",a,b,c);
	c=~a;
	printf("The complement of %d is %d \n",a,c);
	c=~b;
	printf("The complement of %d is %d \n",b,c);
	c=a<<1;
	printf("The LEFT SHIFT of %d is %d \n",a,c);
	c=b<<1;
	printf("The LEFT SHIFT of %d is %d \n",b,c);
	c=a>>1;
	printf("The RIGHT SHIFT of %d is %d \n",a,c);
	c=b>>1;
	printf("The RIGHT SHIFT of %d is %d \n",b,c);
	return 0;
}
