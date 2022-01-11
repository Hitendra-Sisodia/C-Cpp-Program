#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int counter=1;
    int sum=0;

    do{
        sum=sum+counter;
        counter+=1;

    }while(counter<=n);

    cout<<sum<<endl;
    return 0;
}