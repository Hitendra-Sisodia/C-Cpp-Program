//Program to find LCM of number using functions//

#include<stdio.h>
int lcm(int num1,int num2)
{
    int max=(num1>num2)? num1 : num2;
    while(num1>0){                         //while loop is used to prevent error when the factor is less than num1 and num2.On completely diving both numbers in this 
        if(max%num1==0 && max%num2==0){    //case when factor is less than num1 and num2 it will print samller number than max which is not possible for lcm.
            return max;
        }
        max+=1;
    }
}
int main()
{
    int num1,num2;
    printf("Enter the numbers:");
    scanf("%d%d",&num1,&num2);

    printf("The LCM of %d and %d is:%d",num1,num2,lcm(num1,num2));
    return 0;
}