#include<stdio.h>

int main()
{
    int num1,num2;
    int org=num1;
    printf("Enter the first numebr:");
    scanf("%d",&num1);

    printf("Enter the second number:");
    scanf("%d",&num2);

    for(int i=1;i<=num2;i++){
        num1++;
    }
    printf("Addition of %d and %d is:%d",org,num2,num1);
    return 0;
}