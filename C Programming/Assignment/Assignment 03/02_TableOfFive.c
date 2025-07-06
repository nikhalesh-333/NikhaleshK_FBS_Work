#include<stdio.h>

void main()
{
	int no;
	printf("Enter Number");
	scanf("%d",&no);
	int tempNo = no;
	for(int i = 1; i <=10; i++)
	{
		no = i * tempNo;
		printf("%d ",no);
	}
}