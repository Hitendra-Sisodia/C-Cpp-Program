//printing table using while loop

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number to print the table:";
    cin>>n;

    int counter=1;
    while(counter<11){
        cout<<n<< " x "<<counter<< "=" << n*counter<<endl;
        counter++;
    }

    return 0;
}

