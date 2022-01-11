#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter an digit:";
    cin>>n;
    
    int org=n;
    int count=0;

    while(n>0){
        int lastdigit=n%10;
        count=count+(lastdigit*lastdigit*lastdigit);
        n=n/10;

    }
    if(count==org){
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Non Armstrong Number";
    }
    return 0;
}