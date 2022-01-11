#include<stdio.h>
int mysum(int n)
{   
    int count=1;
    for(int i=n;i>=1;i--){
        count*=i;
    }
    return count;
}
int main()
{
    int n;
    printf("Enter the number till sum series to be printed:");
    scanf("%d",&n);

    printf("The sum is:%d",mysum(n));
    return 0;
}