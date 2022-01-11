//bubble sort//

#include<stdio.h>
int main()
{   
    int array[1000];
    int n;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    for(int i=0;i<n-1;i++){                  //loop for value passes
        for(int j=0;j<n-2-i;j++){            //loop for checking condition sorted array shifted to right side//
            if(array[j]>array[j+1]){
                int temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
            }
        }
    }
    
    printf("Resultant array\n");

    for(int i=0;i<n;i++){
        printf("array[%d]:%d\n",i,array[i]);
    }
    return 0;
}
