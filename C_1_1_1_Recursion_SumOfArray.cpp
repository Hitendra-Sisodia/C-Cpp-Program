//sum of array using recursion

#include<stdio.h>
int sum(int a[5],int n)
{
    if(n<=0){
        return 0;
    }
    else{
        return sum(a,n-1)+a[n-1];
    }
}
int main()
{   
    int a[]={1,2,3,4,5};
    int n;
    printf("input the number of element:");
    scanf("%d",&n);
    printf("%d",sum(a,n));
    return 0;
}