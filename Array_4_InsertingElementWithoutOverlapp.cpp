#include<iostream>
using namespace std;

int main()
{
    int a[10]={10,30,40,50};
    int num;
    int pos;
    int i;

    cout<<"Enter the element to insert in array:";
    cin>>num;
    cout<<"Enter the position:";
    cin>>pos;

    for(int i=3;i>=pos;i--){
        a[i+1]=a[i];
    }
    a[pos]=num;

    for(int j=0;j<=4;j++){
        cout<<a[j]<<",";
    }

    return 0;
}