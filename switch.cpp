#include<iostream>
using namespace std;

int main()
{
    char button;
    cout<<"input the char:";
    cin>>button;

    switch(button){
    case 'a':
        cout<<"aello"<<endl;
        break;
    case 'b':
        cout<<"bello"<<endl;
        break;
    case 'c':
        cout<<"cello"<<endl;
        break;
    case 'd':
        cout<<"dello"<<endl;
        break;
    default:
        cout<<"I am still learning more!"<<endl;
        break;
    }
    return 0;
}