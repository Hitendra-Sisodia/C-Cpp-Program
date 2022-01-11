#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number to check armstrong number or not:");
    scanf("%d", &n);

    int org=n;
    int count=0;
    while(n>0){
        int lastdigit=n%10;
        count+=(lastdigit*lastdigit*lastdigit);
        n=n/10;
    }

    if(count==org){
        printf("Armstrong Number");
    }
    else{
        printf("Non Armstrong Number");
    }

    return 0;
}