//Pointers in Array//

#include<stdio.h>
int main()
{
    int array[10]={10,20,30,40,50};
    int *ptr=&array[0];
    int **address=&ptr;

    printf("%d\n",*ptr);
    printf("%d\n",ptr);
    printf("%d\n",&ptr);
    *ptr+=1;
    printf("%d\n",**address);
    printf("%d\n",ptr);
    printf("%d\n",*(&ptr));
    printf("%d\n",&*ptr);
    printf("%d\n",*(&array[1]));
    return 0;
}