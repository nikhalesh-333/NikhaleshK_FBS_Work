#include<stdio.h>

void main()
{
	float totalPrice, price, dPrice;
	printf("Enter Price");
	scanf("%f",&price);
	char isStudent;
	printf("Are You Student?");
	fflush(stdin);
	scanf("%c",&isStudent);
	
	if(isStudent=='Y')
	{
		if(price >= 500) {
			dPrice = price * 0.20;
		}else {
			dPrice = price * 0.10;
		}
	}else {
		if(price >=600) {
			dPrice = price * 0.15;
		}else {
			price;
		}
	}
	printf("%.2f %.2f\n",dPrice,price);
	totalPrice = price - dPrice;
	printf("Total Price %.2f",totalPrice);
}
