#include<stdio.h>

void main()
{
	int eBill,unit;
	printf("Enter Units");
	
	scanf("%d",&unit);
	
	if(unit>=1 && unit<=50)
	
		eBill = unit * 30;
		
	else if(unit>=51 && unit<=150)
	
		eBill = unit * 40;
		
	else
		eBill = unit * 50;
	
	
	printf("Your Electricity Bill is %d",eBill);
	
	
}
