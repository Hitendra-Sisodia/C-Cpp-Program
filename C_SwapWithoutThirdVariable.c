#include<stdio.h>

int main()
{
    int a;
    printf("Enter the first number:");
    scanf("%d",&a);

    int b;
    printf("Enter the second number:");
    scanf("%d",&b);
    
    printf("Number Before swap are %d and %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Number after swap are %d and %d",a,b);

    return 0;
}