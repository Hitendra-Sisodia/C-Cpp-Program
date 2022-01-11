#include<stdio.h>
void armstrong(int n)
{
    int org=n;
    int count=0;
    while(n>0){
        int lastdigit=n%10;
        count+=(lastdigit*lastdigit*lastdigit);
        n=n/10;
    }

    if(count==org){
        printf("Armstrong Number\n");
    }
    else{
        printf("Non Armstrong Number\n");
    }
}

void coprime(int n)
{
    int org=n;
    int count=1;
    while(n>0){
        int lastdigit=n%10;
        count=count*10+lastdigit;
        n=n/10;
    }
    
    int temp=0;
    int min=(org>count)? count : org;
    for(int i=1;i<=min;i++){
        if(org%i==0 && count%i==0){
            temp++;
        }
    }
    if(temp==1){
        printf("Co prime numbers\n");
    }
    else{
        printf("Non co prime numbers\n");
    }
}

int fact(int n)
{
    if(n==0){
        return 1;
    }
    else{
        return(n* fact(n-1));
    }
}

int main()
{
    int n;
    printf("Enter an number:");
    scanf("%d",&n);

    armstrong(n);
    coprime(n);
    printf("Factorial of %d is:%d",n,fact(n));
    return 0;
}