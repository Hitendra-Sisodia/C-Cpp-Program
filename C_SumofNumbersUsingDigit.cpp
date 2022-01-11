#include<stdio.h>

int main()
{   
    int n;
    printf("Enter the number for digit sum:");
    scanf("%d",&n);
    
    int count=0;
    while(n>0){
        int lastdigit=n%10;
        count+=lastdigit;
        n/=10;
    }
    printf("The Sum of number is:%d",count);
    return 0;
}