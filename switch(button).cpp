#include<iostream>
using namespace std;

int main()
{
    char button;
    cout<<"input an letter:";
    cin>>button;

    switch(button){
    case 'a':
        cout<<"hello";
        break;
    case 'b':
        cout<<"bello";
        break;
    case 'c':
        cout<<"cello";
        break;
    case 'd':
        cout<<"dello";
        break;
    default:
        cout<<"I am still learing more:";
    }
    return 0;
}