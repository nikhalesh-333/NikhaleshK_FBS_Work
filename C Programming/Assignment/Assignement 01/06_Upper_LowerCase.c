#include<stdio.h>

void main()
{
	char ch;
	printf("Enter Character ");
	scanf("%c",&ch);
	
	if (ch >= 'A' && ch <='Z')
	{
		printf("Character is UPPERCASE");
	}else{
		printf("Character is LOWERCASE");
	}
}
