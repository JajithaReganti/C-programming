//c program to display first n natural numbers
#include<stdio.h>
int main()
{
	int n,i=1;
	printf("enter a number:");
	scanf("%d",&n);
	do
	{
		printf("%d\t",i);
		i++;
	}
	while(i<=n);
	return 0;
}
