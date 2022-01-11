#include<stdio.h>
int fact(int n)
{   
    int count=1;
    for(int i=n;i>=1;i--){
        count*=i;
    }
    printf("The factorial of number is:%d",count);
}
int main()
{
    int n;
    printf("Enter the number to find factorial:");
    scanf("%d",&n);

    fact(n);
    return 0;
}