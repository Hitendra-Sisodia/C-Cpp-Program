#include<iostream>
using namespace std;

int swap(int num1,int num2)
{
    int org=num1;
    num1=num2;
    num2=org;
    cout<<num1<<" and "<<num2;
}
int main()
{
    int a,b;
    cin>>a>>b;
    swap(a,b);
    return 0;
}