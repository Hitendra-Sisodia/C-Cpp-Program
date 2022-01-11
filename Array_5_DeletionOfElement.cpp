#include<iostream>
using namespace std;

int main()
{
    int a[10]={10,20,30,40,50};
    int pos;
    int i;

    cout<<"Enter the position for deleting element:";
    cin>>pos;

    for(int i=pos+1;i<5;i++){   //deletion takes without any syntax.
        a[i-1]=a[i];
    }
    for(int j=0;j<=3;j++){
        cout<<a[j]<<",";
    }
    return 0;
}
