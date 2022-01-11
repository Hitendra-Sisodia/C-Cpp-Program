//program to check pytha triplet using function

#include<stdio.h>

int pytha(int a,int b,int c)
{
    if(a*a==b*b+c*c){
        return 1;
    }
    else if(b*b==c*c+a*a){
        return 1;
    }
    else if(c*c==a*a+b*b){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int n1,n2,n3;
    printf("Enter the number seperated by space to check pytha triplet:");
    scanf("%d%d%d",&n1,&n2,&n3);

    if(pytha(n1,n2,n3)){
        printf("pytha triplet");
    }
    else{
        printf("non pytha triplet");
    }
    return 0;
}