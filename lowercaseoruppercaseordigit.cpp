//write a c program to check the given character is lowercase or uppercase or digit 
#include<stdio.h>
int main()
{
	char ch;
	printf("enter a character:");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z')
	printf("uppercase\n");
	else if(ch>='a'&&ch<='z')
	printf("lowercase\n");
	else if(ch>='0'&&ch<='9')
	printf("digit\n");
	else
	printf("neither a digit nor a alphabet\n");
	return 0;
}
