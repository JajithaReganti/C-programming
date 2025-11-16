//write a c program to demonstrate comparision operators
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("%d<%d=%d",a,b,a<b);
	printf("%d<=%d=%d",a,b,a<=b);
	printf("%d>%d=%d",a,b,a>b);
	printf("%d>=%d=%d",a,b,a>=b);
	printf("%d==%d=%d",a,b,a==b);	
	printf("%d!=%d=%d",a,b,a!=b);
	return 0;
}
