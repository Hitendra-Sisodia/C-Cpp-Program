//Input the array from user and find max and min//

#include<stdio.h>
#include<climits>

int main()
{
    int n;
    printf("Input the number of element in array excluding 0:");
    scanf("%d",&n);

    int array[n];
    
    //loop for taking input array from user//

    for(int i=0;i<n;i++){
        printf("Input the  element of array with position array[%d]:",i);
        scanf("%d",&array[i]);
    }
    
    int max=INT_MIN;
    int min=INT_MAX;
    
    //loop fo reading updated elements in araay//

    for(int j=0;j<n;j++){       //also can be done as//
        if(array[j]>max){       //maxno=max(array[j],maxno); ===> maxno=array[j];
            max=array[j];       //minno=min(array[j],minno); ===> minno=array[j]; 
        }
        if(array[j]<min){
            min=array[j];
        }
    }


    printf("Max number is:%d\n",max);
    printf("Max number is:%d\n",min);
    return 0;
}