//addition of matrix using 2d array//

#include<stdio.h>
int main()
{
    int a[100][100];
    int b[100][100];
    int sum[100][100];
    int r,c;
    printf("Input the Rows of 1st and 2nd matrix:");
    scanf("%d",&r);
    printf("input the columns of 1st and 2nd matrix:");
    scanf("%d",&c);

    printf("first matrix\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter the element of first matrix with position a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Second matrix\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter the element of 2nd matrix with position a[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    printf("Sum of matrix\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }


    for(int k1=0;k1<r;k1++){
        for(int k2=0;k2<c;k2++){
            printf("%d     ",sum[k1][k2]);
        }
        printf("\n\n");
    }
    return 0;
}