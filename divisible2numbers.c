#include<stdio.h>
void main()
{
	int number;
	printf("enter number");
	scanf("%d",&number);
	if(number%5==0 && number%7==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}
