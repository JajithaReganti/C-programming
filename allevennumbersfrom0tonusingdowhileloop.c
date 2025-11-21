//write a c program to display all even numbers from 0 to n using do while loop
#include<stdio.h>
int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	int i=0;
	do
	{
		if(i%2==0)
		{
		printf("%d\t",i);
    	}
    	i++;
	}
	while(i<=n);
	printf("\n");
	return 0;
}
