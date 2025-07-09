#include<stdio.h>

void main()
{
	int hh, min, sec, totalSec;
	printf("Enter Hours, Min, Sec");
	scanf("%d %d %d",&hh, &min, &sec);
	
	hh = hh * 3600;
	
	min = min * 60; 
	
	
	
	totalSec = hh + min + sec;
	
	printf("Total Second %d",totalSec);
	
	
}