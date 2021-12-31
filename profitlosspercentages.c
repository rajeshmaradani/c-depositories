#include<stdio.h>
void main()
{
	int cp,sp,loss,profit,losspercentage,profitpercentage;
	printf("enter cost price and selling price");
	scanf("%d%d",&cp,&sp);

    if(sp>cp)
    {
    	printf("profit\n");
    		profit=sp-cp;
	
    profitpercentage=(profit*100)/cp;
    printf("profit amount is : %d",profit);
    printf("profit percentage is : %d",profitpercentage);
	}
	else if(sp<cp)
	{
		printf("lose\n");
		loss=cp-sp;
		losspercentage=(loss*100)/cp;
		printf("loss amount is : %d",loss);
		printf("loss pecentage is : %d",losspercentage);
	}
}
