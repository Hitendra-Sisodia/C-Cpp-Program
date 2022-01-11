//Input an array and search for element in array using binay search//

#include<stdio.h>
int binarysearch(int array[],int n, int key)
{
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(array[mid]==key){
            return mid;
        }
        else if(array[mid]>key){
            e=mid-1;
        }
        else if(array[mid]<key){
            s=mid+1;
        }
    }
    return -1;
}
int main()
{
    int n;
    printf("Input the number of elements in array:");
    scanf("%d",&n);

    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    int key;
    printf("Enter the number/key to search in array:");
    scanf("%d",&key);

    printf("The number found in array with position:%d",binarysearch(array,n,key));
    return 0;
}