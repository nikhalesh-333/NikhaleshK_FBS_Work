#include<stdio.h>
void isArmstrong();

void main()
{
	isArmstrong();
}

void isArmstrong()
{
	int no, sum =0, r1;
	printf("Enter Number");
	scanf("%d",&no);
	int temp = no;
	while(no > 0)
	{
		r1 = no % 10;
		sum = sum + r1*r1*r1;
		no = no/10;
	}
	if(sum==temp)
	{
		printf("Number is ArmStrong");	
	}else
	{
		printf("Number is Not ArmStrong");
	}	            

}