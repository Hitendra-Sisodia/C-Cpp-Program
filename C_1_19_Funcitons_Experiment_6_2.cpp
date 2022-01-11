#include<stdio.h>
int triangle_area(int base,int height)
{
    int area=0.5*base*height;
    return area;
}

void swap(int n1,int n2)
{
    printf("value of a=%d b=%d before swapping\n", n1, n2);

    n1 = n1 ^ n2;
    n2 = n1 ^ n2;
    n1 = n1 ^ n2;
    printf("value of a=%d b=%d after swapping\n", n1, n2);

}

float remainder(int n1,int n2)
{
    float rem=n1%n2;
    return rem;
}

int main()
{
    int a;
    printf("Enter first number:");
    scanf("%d",&a);

    int b;
    printf("Enter second number:");
    scanf("%d",&b);

    printf("Area of triangle is:%d\n",triangle_area(a,b));
    swap(a,b);
    printf("The remainder of %d and %d  is:%f\n",a,b,remainder(a,b));

    return 0;
}