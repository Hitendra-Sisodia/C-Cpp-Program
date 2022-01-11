//combination question using function

#include<stdio.h>
int fact(int n)
{   
    int count=1;
    for(int i=n;i>=1;i--){
        count=count*i;
    }
    return count;
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);

    int r;
    printf("Enter the ratio:");
    scanf("%d",&r);

    int nCr=(fact(n))/(fact(n-r)*fact(r));
    printf("The result is:%d",nCr);
    return 0;
}