#include<stdio.h>

int main()
{
    int num1;
	printf("Enter the number to check divisible by 2 aand 3 or not:");
	scanf("%d",&num1);

	if(num1%2==0 && num1%3==0){
		printf("The number is divisible by 2 and 3");
	}
	else{
		printf("The number is not divisible");
	}
	return 0;
}