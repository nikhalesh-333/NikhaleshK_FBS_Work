#include<stdio.h>

void main() {
	int no[5];
	printf("Enter Element ");
	for(int i=0; i<5; i++){
		scanf("%d",&no[i]);
	}
	int find;
	printf("Enter Search Number ");
	scanf("%d",&find);
	
	for(int i=0; i<5; i++) {
		if(no[i]==find) {
			printf("%d This Element Find on index %d",find,i);
		}
	}
}