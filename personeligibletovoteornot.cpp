//write a c program to check whether the person is eligible to vote or not
#include<stdio.h>
int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	if(n>=18)
	printf("YES\n");
	else
	printf("NO\n");
	return 0;
}
