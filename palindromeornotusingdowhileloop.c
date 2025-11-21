//write a c program to check the given number is palindrome or not using do while loop
#include<stdio.h>
int main()
{
	int rev=0,n,r,m;
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
	if(rev==m)
	{
		printf("palindrome\n");
	}
	else
	printf("not a palindrome\n");
	return 0;
}
