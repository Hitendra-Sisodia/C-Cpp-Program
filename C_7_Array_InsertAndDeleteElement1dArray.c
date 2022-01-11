//insert elements in 1d array//

#include<stdio.h>

int main()
{
    int a[10]={10,20,30,40,50};
    
    int n;
    printf("Enter the number of elements:"); 
    scanf("%d",&n);

    int place;
    printf("Enter the position for inserting element:");//always include zero//
    scanf("%d",&place);

    for(int i=n-1;i>=place;i--){
        a[i+1]=a[i];                                          //loop for insert
    }

    printf("Enter the element to insert in array:");
    scanf("%d",&a[place]);

    //for printing the array//
    
    printf("Array before insert:10 20 30 40 50\n");               
    printf("Array after insert:");                          //loop to display updated array
    for(int j=0;j<n+1;j++){
        printf("%d ",a[j]);
    }
    printf("\n");

    int pos;
    printf("Enter the position of deleting element:");                
    scanf("%d",&pos);
    
    printf("Array before deletion:");
    for(int k=0;k<n+1;k++){                               //loop for printing array
        printf("%d ",a[k]);
    }
    printf("\n");


    for(int j=pos;j<n;j++){                               //loop for deletion of element in array
        a[j]=a[j+1];
    }
     
    printf("Array after deletion:");                              
    for(int m=0;m<n;m++){                                //loop for displaying updated array
        printf("%d ",a[m]);
    }
    return 0;
}