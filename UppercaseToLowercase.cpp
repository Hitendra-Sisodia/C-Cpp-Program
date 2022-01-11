//convert upper case to lower case in and viceversa

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter an characters:";
    cin>>ch;

    if(ch>='a' && ch<='z'){
        int b=int(ch)-32;
        cout<<char(b)<<endl;
    }
    else if(ch>='A' && ch<='Z'){
        int b=int(ch)+32;
        cout<<char(b)<<endl;
    }
    else{
        cout<<endl;
    }
}