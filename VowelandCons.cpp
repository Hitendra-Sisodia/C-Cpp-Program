#include<iostream>
using namespace std;

int main()
{
    char c;
    int isuppervowel,islowervowel;
    cout<<"enter the char"<<endl;
    cin>>c;

    isuppervowel=(c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
    islowervowel=(c=='a' || c=='a' || c=='i' || c=='o' || c=='u');

    if(islowervowel || isuppervowel){
        cout<<"vowel"<<endl;
    }
    else{
        cout<<"other than vowel"<<endl;
    }

    return 0;
}