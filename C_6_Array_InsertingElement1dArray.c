//inserting element on user choice//

#include<stdio.h>
int main()
{   
    int n;
    printf("Enter the no of element in array:");
    scanf("%d",&n);

    int array[n];

    for(int i=0;i<n;i++){
        printf("Enter the element with postion %d:",i);
        scanf("%d",&array[i]);      //inputing array from user
    }

    int pos;
    printf("Enter the position for inserting element:");
    scanf("%d",&pos);

    for(int i=n-1;i>=pos;i--){
        array[i+1]=array[i];               //shifting of element right side
    }

    printf("Enter the element to insert in array:");
    scanf("%d",&array[pos]);

    printf("Array before insert:");
    for(int i=0;i<n;i++){                       //loop for display array
        printf("%d ",array[i]);
    }
    
    printf("\n");
    printf("Array after insert:");
 
    for(int i=0;i<n+1;i++){                         //loop for printing updated array
        printf("%d ",array[i]);
    }
    return 0;
}