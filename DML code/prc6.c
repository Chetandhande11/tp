#include<stdio.h>       //header file

int gcd(int a,int b)     //function to calculate the GCD using euclidean algo
{
	int x=a;
	int y=b;
	int r;
	while(y!=0){
		r=x%y;
		x=y;
		y=r;
	}
	return x;
}
int main()
{
int no1,no2;
printf("Enter two positive integers : ");
scanf("%d%d",&no1,&no2);
        
printf("The GCD of %d and %d is %d ",no1,no2,gcd(no1,no2));  //display  gcd

	return 0;
}

