#include<stdio.h>

int main()
{
    int num1=0,num2=0;
    int temp=0;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    printf("The number before swap is %d and %d \n",num1,num2);

    temp=num1;
    num1=num2;
    num2=temp;

    printf("The number after swap is %d and %d",num1,num2);

    return 0;
}