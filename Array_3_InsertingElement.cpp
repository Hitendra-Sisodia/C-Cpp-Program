#include<iostream>
using namespace std;

int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int num;
    int position;
    char choice;
    int i=1;

    do{
        cout<<"Enter the "<<i<<" Number:";
        cin>>num;
        cout<<"Enter the position to insert the number:";
        cin>>position;
        a[position]=num;
        i=i+1;

        cout<<"Do you want to enter again:";
        cin>>choice;

    }while(choice=='Y' || choice=='y');

    for(int j=0;j<=i;j++){
        cout<<a[j]<<",";
    }
    return 0;
}