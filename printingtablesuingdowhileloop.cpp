//printing table using dowhile loop

#include<iostream>
using namespace std;

int main()
{   
    int n;
    cout<<"Enter the number to print the table:";
    cin>>n;
    
    int counter=1;

    do{
        cout<<n<< " x " <<counter<< " = " <<n*counter<<endl;
        counter++;
    }while(counter<11);

    return 0;
}
