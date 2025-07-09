#include<stdio.h>

void main() {
	int no,sum = 0, rem;
	printf("Enter Number ");
	scanf("%d",&no);
	
	int tempNo = no;
	while(no > 0)
	{
		rem = no % 10;
		
		int fact = 1;
		for(int i = 1; i <= rem; i++)
		{
			fact = fact * i;
			
		}
		
		sum = sum + fact;
		no = no/10;
		
	}
	if(sum==tempNo)
	{
		printf("Strong Number");
	}else{
		printf("Not Strong Numbers");		
	}
}