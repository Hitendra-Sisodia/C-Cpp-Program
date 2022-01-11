//roots of qudratic equation using function

#include<stdio.h>
#include<math.h>

int qud(int a,int b,int c)
{   
    int D=(b*b)-(4*a*c);
    return D;
}
int main()
{
    int a,b,c;
    printf("Enter a,b,c var and constant seperated by space:");
    scanf("%d%d%d",&a,&b,&c);
    int D;
    int root1,root2;
    float real,img;

    
    D=(b*b)-(4*a*c);
    if(D>0){
        printf("Disctint and unequal roots exist");
        root1=(-b+sqrt(D))/(2*a);
        root2=(-b-sqrt(D))/(2*a);
        printf("The roots are %d  and %d",root1,root2);
    }
    else if(D==0){
        printf("Disctint and Equal root exist");
        root1=-b/2*a;
        root2=-b/2*a;
        printf("The roots are %d  and %d",root1,root2);
    }
    else{
        printf("Img roots exist");
        real=-b/2*a;
        img=sqrt(D)/2*a;
        printf("The real part is %d and Img part is %d",real,img);
    }
    return 0;
}