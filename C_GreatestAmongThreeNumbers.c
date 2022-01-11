#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter the numbers separated by gap:");
    scanf("%d%d%d",&num1,&num2,&num3);

    if(num1>num2){
        if(num1>num3){
            printf("%d Number is greatest",num1);
        }
        else{
            printf("%d Number is greatest",num3);
        }
    }

    else{
        if(num2>num3){
            printf("%d Number is greatest",num2);
        }
        else{
            printf("%d  Number is greatest",num3);
        }
    }
    return 0;
}