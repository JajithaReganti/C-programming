//write a c program to demonstrate bitwise operators
#include<stdio.h>
int main()
{
	int a=6,b=5;
	printf("%d&%d=%d",a,b,a&b);
	printf("%d/%d=%d",a,b,a/b);
	printf("~%d=%d",a,~a);
	printf("%d^%d=%d",a,b,a^b);
	printf("%d<<2=%d",a,a<<2);
	printf("%d>>2=%d",a,a>>a);
	return 0;
}
