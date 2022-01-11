//selection sort//

#include<stdio.h>
int main()
{
    int array[1000];
    int n;
    int count=0;
    printf("Enter the number of element in array:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    
    printf("                  Given array\n");
    for(int i=0;i<n;i++){
        printf("array[%d]:%d\n",i,array[i]);
    }
    printf("\n");
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){        
            if(array[i]>array[j]){      //i is remain fixed and that i value compared with all value of j in right side and sorted element remain left side//
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
                count++;
            }
        }
    }

    printf("                  Sorted array\n");
    for(int i=0;i<n;i++){
        printf("array[%d]:%d\n",i,array[i]);
    }
    printf("\n");
    printf("No of time looping is done:%d",count);
    return 0;
}