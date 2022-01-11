#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number to print the table:";
    cin>>n;
    
    int count=1;

    while(count<11){
        cout<<n<<" x "<<count<<" = "<<n*count<<endl;
        count++;
    }
    return 0;
}