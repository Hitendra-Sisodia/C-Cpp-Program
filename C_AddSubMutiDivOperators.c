#include<stdio.h>

int main()
{
    int num1,num2;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);

    int add=num1+num2;
    int sub=num1-num2;
    int div=num1/num2;
    int multi=num1*num2;

    printf("Addition of numbers:%d\n",add);
    printf("Difference of number:%d\n",sub);
    printf("Divsion of number is:%d\n",div);
    printf("Multiplication of number is:%d\n",multi);
    return 0;
}