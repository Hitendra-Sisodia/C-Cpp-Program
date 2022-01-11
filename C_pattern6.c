#include<stdio.h>

int main()
{
    int r;
    printf("Enter the number of rows:");
    scanf("%d",&r);

    for(int i=1;i<=r;i++){
        for(int k=r-i;k>=1;k--){
            printf("  ");
        }
        int count=i-1;
        for(int j=1;j<=2*i-1;j++){
            if(j<=i){
                count++;
                printf("%d ",count);
            }
            if(j>i){
                count--;
                printf("%d ",count);
            }
        }
        printf("\n");

    }
    return 0;
}