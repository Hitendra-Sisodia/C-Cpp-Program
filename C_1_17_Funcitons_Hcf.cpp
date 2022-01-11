//program to find HCF of two numbers using functions//

#include<stdio.h>
int hcf(int num1,int num2)
{   
    int min=(num1>num2)? num2:num1;
    for(int i=min;i>=1;i--){         //we using for loop because loop it depend on the min value and loop doesnot exced num1 and num2.
        if(num1%i==0 && num2%i==0){   //we know the last vlaue of loop that is why we using for loop.
            return i;
        }
    }
}
int main()
{
    int num1,num2;
    printf("Enter the numbers:");
    scanf("%d%d",&num1,&num2);

    printf("The HCF of %d and %d is:%d",num1,num2,hcf(num1,num2));
    return 0;
}