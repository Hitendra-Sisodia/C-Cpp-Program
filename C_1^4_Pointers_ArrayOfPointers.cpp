//array of pointers//

#include<stdio.h>
int main()
{
    int array[]={10,20,30,40,50};
    int *ptr[5];

    for(int i=0;i<5;i++){       //loop used for storing address of array
        ptr[i]=&array[i];        //where ptr is pointer array which only contain address
    }

    for(int i=0;i<5;i++){          //loop used to convert address again into respective value of the array elements//
        printf("%d ",*ptr[i]);
    }
    return 0;
}