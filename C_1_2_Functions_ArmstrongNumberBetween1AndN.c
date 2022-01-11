#include<stdio.h>
int armstrong(int i)
{
    int org=i;
    int number=0;

    while(i>0){
        int lastdigit=i%10;
        number+=(lastdigit*lastdigit*lastdigit);
        i/=10;
    }
    if(org==number){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        if(armstrong(i)){
            printf("%d\n",i);
        }
    }
    return 0;
}