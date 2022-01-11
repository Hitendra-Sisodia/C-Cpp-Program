//factorial of number using recursion function

#include<stdio.h>
int recursion(int n)
{
    if(n==0){
        return 1;
    }
    else{
        return(n* recursion(n-1)); 
    }
}

int main()
{
    int n;
    printf("Input the number:");
    scanf("%d",&n);

    printf("%d",recursion(n));

    return 0;
}
