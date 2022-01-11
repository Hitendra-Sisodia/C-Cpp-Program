//[1].For call by value always use normal way of callig functions. 
//1.changes make is sum functions will not reflect in main functions.
//2.memory address of a and b  not same as x and y because x and y will form copy of a and b at different memory address.
//3.calling function or actual argument functions values remain same as assigned by user or didt get updated.

#include<iostream>
using namespace std;

int sum(int x,int y)
{
    x=x+5;
    y=y+6;
    cout<<x<<" And "<<y<<endl;
}
int main()
{
    int a=5;
    int b=4;
    sum(a,b);
    cout<<a<<" And "<<b;

    return 0;
}
//[2].For call by refrence always use "&" Sign before formal Arguments.
//1.changes make in sum functions will reflect in main functions.
//2.x and y have same memory address as a and b.
//3.calling functions or actual argument function values gets updates by default as per changes make in formal argument functions.

#include<iostream>
using namespace std;

int sum(int &x,int &y)
{
    x=x+5;
    y=y+6;
    cout<<x<<" And "<<y<<endl;
}
int main()
{
    int a=5;
    int b=4;
    sum(a,b);
    cout<<a<<" And "<<b;

    return 0;
}

//[3].For using call by pointer use "&" before actual arguments and "*" before the formal arguments all value of a and b is updated by using "*" as prifix.
//1. "&" is used to get memory address of any int,char,bool. it always used in prefix. Ex. "cout<<&a;".
//2. "*" is used for making any varaible as pointer.Then we store memory address in it.Ex. "int *a".

#include<iostream>
using namespace std;

int sum(int *x,int *y)
{
    *x=*x+5;
    *y=*y+6;
    cout<<x<<" And "<<y<<endl;
}
int main()
{
    int a=5;
    int b=4;
    sum(&a,&b);
    cout<<a<<" And "<<b;

    return 0;
}