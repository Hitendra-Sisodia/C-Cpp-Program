#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int org=n;
    int reverse=0;

    while(n>0){
        int lastdigit=n%10;
        reverse=reverse*10+lastdigit;
        n=n/10;
    }
    if(reverse==org){
        cout<<"palindrome";
    }
    else{
        cout<<"Non palindrome";
    }
    
    return 0;
}