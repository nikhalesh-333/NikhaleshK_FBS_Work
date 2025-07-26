#include<stdio.h>
void isPalindrome(int*);

void main() {
	int no;
	printf("Enter Number");
	scanf("%d",&no);

	isPalindrome(&no);
}
void isPalindrome(int* no) {
	int rem, rev=0;
	int temp = *no;

	while(*no>0) {
		rem = *no %10;
		rev = rev * 10 +rem;
		*no = *no/10;
	}

	if(temp==rev) {
		printf("Palindrome");
	} else {
		printf("Not Palindrome");
	}

}
