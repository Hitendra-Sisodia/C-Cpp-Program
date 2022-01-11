#include<iostream>
using namespace std;

int printb(int num1,int num2)
{
    for(int i=num1+1;i<num2;i++)
    cout<<i<<endl;
}
int main()
{   
    int a,b;
    cin>>a>>b;

    printb(a,b);
    return 0;
}