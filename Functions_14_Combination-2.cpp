#include<iostream>
using namespace std;

int fact(int num){
    int count=1;
    for(int i=num;i>=2;i--)
    count*=i;
    return count;

}
int main()
{
    int n,r;
    cin>>n>>r;
    
    if(n>r){
        int ans=fact(n)/(fact(n-r)*fact(r));
        cout<<ans;
    }
    else{
        cout<<"In valid !";
    }
    return 0;
}