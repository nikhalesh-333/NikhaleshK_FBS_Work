#include<stdio.h>
int isArmstrong();

void main()
{
	int x = isArmstrong();
	if(x==1)
		printf("Armstrong");
	else
		printf("Not Armstrong");
}

int isArmstrong()
{
	int no, sum =0, r1;
	printf("Enter Number");
	scanf("%d",&no);
	
	int temp = no;
	int count =0;
	while(temp > 0)
	{
		count++;
		temp = temp / 10;
	}
	printf("%d\n",count);
	int temp1 = no;
	printf("%d\n",no);
	while(no > 0)
	{
		r1 = no % 10;
		sum = sum + r1*count;
		no = no/10;
	}
	if(sum==temp1)
		return 1;
	else
		return 0;            
	
}
 