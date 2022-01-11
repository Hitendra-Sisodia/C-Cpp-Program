//deletion of element from array on user chioice using function//

#include<stdio.h>
int deletion(int array[], int n)
{   
    
    for(int i=0;i<n;i++){
        printf("Enter the element to insert in array with postion array[%d]:",i);
        scanf("%d",&array[i]);            //loop for inputing array from user//
    }


    int pos;
    printf("Enter the position for deletion of element:");
    scanf("%d",&pos);


    printf("                 Inputed Array\n");
    for(int i=0;i<n;i++){
        printf("array[%d]:%d\n",i,array[i]);  //loop for displaying inputed array//
    }


    for(int j=pos;j<n;j++){
        array[j]=array[j+1];             //loop for deletion of element//
    }


    printf("                 Updated Array\n");
    for(int k=0;k<n-1;k++){
        printf("array[%d]:%d\n",k,array[k]);  //loop for displaying updated array//
    }
}


int main()
{   
    int array[1000];
    int n;
    printf("Input the number of element in array:");
    scanf("%d",&n);
    

    deletion(array,n);
    return 0;
}