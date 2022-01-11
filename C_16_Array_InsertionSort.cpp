//insertion sort//

#include<stdio.h>

int main()
{
    int array[100];

    int n;
    printf("input the number of element in array:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    printf("               Given array\n");
    for(int i=0;i<n;i++){
        printf("array[%d]:%d\n",i,array[i]);
    }

    for(int i=1;i<n;i++){          //loop for storing holes in temp var
        int temp=array[i];
        int j=i-1;
        while(j>=0 && array[j]>temp){     //loop for checking conditions
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=temp;
    }
    
    printf("               sorted array\n");
    for(int i=0;i<n;i++){
        printf("array[%d]:%d\n",i,array[i]);
    }
    return 0;
}