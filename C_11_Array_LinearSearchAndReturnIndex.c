//Input array then read array and then search for key in array//

#include<stdio.h>
int linearsearch(int array[],int n,int key)
{
    //loop of reading elements in array//
    for(int i=0;i<n;i++){
        if(array[i]==key){
            return i;
        }
    }
    return -1;    //-1 va;lue return if key not found in inputed array//
}



int main()
{   
    //loop for no of elements in array//
    int n;
    printf("Input the no elements in array:");
    scanf("%d",&n);

    int array[n];
    //Input an array from user//
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    //input number/key for linear search in array//
    int key;
    printf("Enter the number to find in array:");
    scanf("%d",&key);

    printf("Number find in array with position:%d",linearsearch(array,n,key));
    return 0;
}