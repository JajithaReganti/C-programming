//write a c program to find sum of digits of a number using do while loop
#include<stdio.h>
int main()
{
	int n,sum=0,digit;
	printf("enter a number:");
	scanf("%d",&n);
	do
	{
		digit=n%10;
		sum=sum+digit;
		n=n/10;
	}
	while(n>0);
	printf("sum=%d\n",sum);
	return 0;
}
