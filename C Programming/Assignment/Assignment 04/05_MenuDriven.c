#include<stdio.h>

void main() {
	int choice;

	printf("1. Check Even or Odd\n");
	printf("2. Check Prime or Not\n");
	printf("3. Check Palindrome or Not\n");
	printf("4. Check Positive, Negative or Zero\n");
	printf("5. Reverse the Number\n");
	printf("6. Find Sum of Digits\n");
	scanf("%d",&choice);

	if(choice==1) {
		int no;
		printf("Enter Number ");
		scanf("%d",&no);
		if(no%2==0) {
			printf("%d Even",no);
		} else {
			printf("%d Odd",no);
		}
	}

	else if(choice==2) {
		int no, i=2, flag=0;
		printf("Enter Number ");
		scanf("%d",&no);

		while(i<no) {
			if(no%2==0) {
				flag =1;
				break;
			}
			i++;
		}
		if(flag==0) {
			printf("%d No is Prime",no);
		} else {
			printf("%d No is Not Prime",no);
		}
	}

	else if(choice==3) {
		int no;
		printf("Enter Number ");
		scanf("%d",&no);

		int rem, rev =0, temp = no;
		while(no>0) {
			rem = no % 10;
			rev = rev * 10 + rem;
			no = no / 10;
		}
		if(rev==temp) {
			printf("%d is palindrome",temp);
		} else {
			printf("%d is Not palindrome",temp);
		}
	}

	else if(choice==4) {
		int no;
		printf("Enter Number ");
		scanf("%d",&no);

		if(no>0) {
			printf("Positive");
		} else if(no<0) {
			printf("Negative");
		} else {
			printf("Zero");
		}
	}

	else if(choice==5) {
		int no;
		printf("Enter Number ");
		scanf("%d",&no);

		int rem, rev =0;
		while(no>0) {
			rem = no % 10;

			rev = rev * 10 + rem;

			no = no /10;
		}
		printf("%d",rev);
	}

	else if(choice==6) {
		int no;
		printf("Enter Number ");
		scanf("%d",&no);

		int sum = 0,rem;
		while(no>0) {
			rem = no % 10;
			sum = sum + rem;
			no = no/10;
		}
		printf("%d",sum);
	}
	else {
		printf("Invalid choice");
	}
}