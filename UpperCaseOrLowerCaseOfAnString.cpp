//findupper case lowercase of an string element

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    
    if(ch>='a' && ch<='z'){
        cout<<"This is lower case";
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"This is upper case";
    }
    else if(ch>='0' && ch<='9'){
        cout<<"Numbers";
    }
    else{
        cout<<"";
    }
}