#include<stdio.h>

int main()
{ 
    int n;
    printf("Enter the number to check palnidrome:");
    scanf("%d",&n);

    int org=n;
    int number=0;

    while(n>0){
        int lastdigit=n%10;
        number=number*10+lastdigit;
        n/=10;
    }
    if(org==number){
        printf("%d is an planidrome number",org);
    }
    else{
        printf("%d is an non palnidrome number",org);
    }

    return 0;
}