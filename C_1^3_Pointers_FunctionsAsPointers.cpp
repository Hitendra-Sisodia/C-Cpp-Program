//pointers in function

#include<stdio.h>
int sum(int *ptr)
{
    for(int i=0;i<5;i++){
        *ptr=*ptr/10;
        ptr+=1;
    }
}
int main()
{
    int array[]={10,20,30,40,50};   //since we are manuplating values using address so changes made in fromal arguments reflect in actual arguments//
    sum(&array[0]);                   //This method is also called as call by pointers//

    for(int i=0;i<5;i++){
        printf("%d",array[i]);
    }
    return 0;
}