#include<stdio.h>

int incr(int count)  //function is created for incriment

{
    count++;
    return count;
}

int main()
{
    char ans;
    printf("Hello! Are u new to upes press Y for Yes and N for No:");
    scanf("%c",&ans);
    
    int count=0;
    int ans2;
    if(ans=='Y'){
        do{
            printf("Hello! Are u new to upes press 1 for Yes and 0 for No:");
            scanf("%d",&ans2);
            int result=result+incr(count);  //result declared to perform sum inside loop
            if(ans2==0){
                printf("The total number of new visitor today is:%d",result);
            }
        }
        while(ans2==1);
    }
    else if(ans=='N'){
        printf("The total number of new visitor today is:%d",count);
    }
    else{
        printf("");
    }
    return 0;
}