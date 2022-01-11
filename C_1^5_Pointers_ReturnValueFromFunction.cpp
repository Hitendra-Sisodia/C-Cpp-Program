#include<stdio.h>

int *great(int *p1,int *p2)   //*must be used as prifix in functions//
{
    if(*p1>*p2){
        return (p1);     //returnd address stored in p1//
    }
    else{
        return (p2);
    }
}


int main()
{
    int a=5,b=6;
    int *p=great(&a,&b);    //returned value is address only stored in pointer//
    printf("%d",*p);
    return 0;
}

