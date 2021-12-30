#include<stdio.h>
void main()
{
	int number;
	printf("enter a number");
	scanf("%d",&number);
	if(number==1)
	{
		printf("monday");
	}
	else if(number==2)
	{
		printf("tuesday");
	}
	else if(number==3)
	{
		printf("wednessday");
	}
	else if(number==4)
    {
    	printf("thursday");
	}
	else if(number==5)
	{
		printf("friday");
	}
	else if(number==6)
	{
		printf("saturday");
	}
	else if(number==7)
	{
		printf("sunday");
	}
	else
	{
		printf("invalid input");
	}
}
