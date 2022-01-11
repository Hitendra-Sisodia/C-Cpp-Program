#include<iostream>
using namespace std;

int main()
{
    int n1;
    int n2;

    cin>>n1;
    cin>>n2;

    int c=n1>n2?n1-n2:n2-n1;

    cout<<c<<endl;
    return 0;
}