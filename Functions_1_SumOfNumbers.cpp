#include<iostream>
using namespace std;
 
int add(int num1,int num2)
{   
    int add=num1+num2;
    return add;
}

int main()
{   
    int a=5;
    int b=6;
    cout<<add(a,b)<<endl;
    return 0;
}