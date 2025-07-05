#include<stdio.h>

void main()
{
	double sal, da, ta, hra, totalSal;
	printf("Enter Basic Salary ");
	scanf("%lf",&sal);
	
	if (sal <= 5000)
	{
		da = sal * 0.10;
		ta = sal * 0.20;
		hra = sal * 0.25;
		printf("%.2lf %.2lf %.2lf\n",da, ta, hra);
	}else{
		da = sal * 0.15;
		ta = sal * 0.25;
		hra = sal * 0.30;
		printf("%.2lf %.2lf %.2lf\n",da, ta, hra);
	}
	totalSal = sal + da + ta + hra;
	printf("Total salary is %.2lf",totalSal);
}
