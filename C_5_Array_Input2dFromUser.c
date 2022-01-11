//input 2d aray from the user and read its all inputed elements//

#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the number of rows to be inputed:");
    scanf("%d",&r);
    printf("Enter the number of columns to be inputed:");
    scanf("%d",&c);
    

    //for input of 2d array from user//
    int array[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("The enter the element with position array[%d][%d]:",i,j);
            scanf("%d",&array[i][j]);
        }
    }

    //loop for display/reading/printing 2d array//
    for(int k=0;k<r;k++){
        for(int m=0;m<c;m++){
            printf("%d   ",array[k][m]);
            if(m==c-1){              //condition is used for printing new row when m get equal to inputed columns then line break added//
                printf("\n");                                     //where m is no of columns while printing//
            }
        }
    }
    return 0;
}