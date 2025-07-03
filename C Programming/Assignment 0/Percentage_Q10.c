#include<stdio.h>

int main()
{
	float eng = 37, mar = 40, hind = 15, hist = 22, scien = 44;
	float percentage, totalMarks;
	
	totalMarks = eng + mar + hind + hist + scien;
	printf("Total Marks : %.2f\n",totalMarks);
	
	percentage = totalMarks/ 250 * 100;
	printf("Percentage :%.2f",percentage);
}
