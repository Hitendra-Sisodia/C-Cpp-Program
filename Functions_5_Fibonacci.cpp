#include<iostream>
using namespace std;

int fibo(int num)
{   
    int a=0;
    int b=1;
    for(int i=1;i<=num;i++){
        cout<<a<<",";
        int c=a+b;
        a=b;
        b=c;
    }
    return;
}
int main()
{   
    int n;
    cout<<"Enter the number upto fibonacci series to be printed:";
    cin>>n;
  
    fibo(n);

    return 0;
}