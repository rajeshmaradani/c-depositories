#include<stdio.h>
void main()
{
	int marks;
	printf("enter marks");
	scanf("%d",&marks);
	if(marks>100)
	{
		printf("invalid input");
    }
    else if(marks>=90 && marks<=100)
    {
    	printf("O grade");
	}
	else if(marks<90 && marks>=80)
	{
		printf("A grade");
	}
	else if(marks<80 && marks>=70)
	{
		printf("B grade");
	}
	else if(marks<70 && marks>=60)
	{
		printf("C grade");
	}
	else if(marks<60 && marks>=50)
	{
		printf("D grade");
	}
	else if(marks<50)
	{
		printf("fail");
	}
}
