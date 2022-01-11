#include<stdio.h>

int main()
{
    int num1;
    int product=0;
    printf("Enter the first number:");
    scanf("%d",&num1);

    int num2;
    printf("Enter the second number:");
    scanf("%d",&num2);

    for(int i=1;i<=num2;i++)
    {
        product=product+num1;
    }

    printf("The product of %d and %d is:%d",num1,num2,product);
    return 0;
}