#include<stdio.h>
void main()
{
	int buy_price,sell_price;
	printf("enter buy price and enter sell price");
	scanf("%d%d",&buy_price,&sell_price);
	if(sell_price>buy_price)
	{
		printf("profit");
	}
	else if(sell_price<buy_price)
	{
		printf("loss");
	}
	else
	{
		printf("no profit no loss");
	}
}
