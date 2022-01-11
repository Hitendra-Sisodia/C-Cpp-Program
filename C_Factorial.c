#include<stdio.h>
int main()
{
    int n;
    printf("Enter the nuumber to check factorial:");
    scanf("%d",&n);
    int count=1;

    for(int i=n;i>=1;i--){
        count*=i;
    }
    printf("The result is:%d",count);
    return 0;
}