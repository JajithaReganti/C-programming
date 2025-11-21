//write a c program to find reverse of a number using do while loop
#include<stdio.h>
int main()
{
	int n,r,rev=0,m;
	printf("enter a number:");
	scanf("%d",&n);
	m=n;
	do
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	while(n !=0);
	printf("reverse=%d\n",rev);
	return 0;
}
