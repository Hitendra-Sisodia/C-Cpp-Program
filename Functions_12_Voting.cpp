#include<iostream>
using namespace std;

int Age(int num)
{
    if(num>=18){
        cout<<"You can Vote !";
    }
    else{
        cout<<"You Cant vote !";
    }
}
int main()
{
    int n;
    cout<<"Enter yrs Age:";
    cin>>n;

    Age(n);
    return 0;
}