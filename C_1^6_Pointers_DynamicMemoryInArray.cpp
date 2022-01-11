//allote dynamic memeory in array

#include<stdio.h>
int main()
{
    int *ptr;
    ptr=new int[3];

    for(int i=0;i<3;i++){
        scanf("%d",*ptr);
        ptr++;
    }
    
    ptr=ptr-2;
    for(int j=0;j<3;j++){
        printf("%d",*ptr);
        ptr++;                              //program not running due to some error.
    }
    return 0;
}