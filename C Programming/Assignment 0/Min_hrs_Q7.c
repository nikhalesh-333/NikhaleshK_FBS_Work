#include<stdio.h>

int main()
{
	int min = 66;
	int hrs;
	
	hrs = min / 60;
	min = min % 60;
	
	printf("%d Hours,%d Minute",hrs,min);
	
}
