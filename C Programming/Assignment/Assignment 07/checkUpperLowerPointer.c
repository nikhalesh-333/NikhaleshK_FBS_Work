#include<stdio.h>
void checkUpperLower(char*);

void main() {
	char ch;
	printf("Enter Charater ");
	scanf("%c",&ch);
	
	checkUpperLower(&ch);
}

void checkUpperLower(char* c) {
	if(*c>='A' &&*c<='Z') {
		printf("UpperCase");
	} else {
		printf("LowerCase");
	}
}