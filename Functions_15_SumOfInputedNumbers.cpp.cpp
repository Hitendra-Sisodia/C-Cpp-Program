#include<iostream>
using namespace std;

int sum(int num)
{   
    int count=0;
    for(int i=1;i<=num;i++){
        count+=i;
    }
    return count;
}
int main()
{
    int n;
    cin>>n;

    cout<<sum(n);
    return 0;
}

//we can also use (n(n+1))/2 formula derived from Ap.