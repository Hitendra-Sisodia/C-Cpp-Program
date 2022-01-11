#include<iostream>
using namespace std;

int comb(int n,int r)
{   
    int count=1;
    for(int i=n;i>=2;i--){
        count*=i;
    }

    int update=1;
    for(int j=n-r;j>=2;j--){
        update*=j;
    }
    int range=1;
    for(int k=r;k>=2;k--){
        range*=k;
    }

    int c=count/(update*range);
    return c;
}
int main()
{
    int n,r;
    cout<<"Enter the value of n combination r:";
    cin>>n>>r;
    
    if(n>r){
        cout<<comb(n,r);
    }
    else{
        cout<<"IN VALID !";
    }
    
    return 0;
}