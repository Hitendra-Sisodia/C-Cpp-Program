//prg to find vowel or an constant

#include<iostream>
using namespace std;

int main()
{
    char a;
    cout<<"input the vowel/constant:";
    cin>>a;

    switch(a){
    case 'a':
        cout<<"vowel"<<endl;
        break;
    case 'e':
        cout<<"vowel"<<endl;
        break;
    case 'i':
        cout<<"vowel"<<endl;
        break;
    case 'o':
        cout<<"vowel"<<endl;
        break;
    case 'u':
        cout<<"vowel"<<endl;
        break;
    default:
        cout<<"constant"<<endl;
        break;
    }
    return 0;
}