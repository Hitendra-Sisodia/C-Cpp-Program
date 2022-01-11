#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the range of numbers:";
    cin>>a>>b;
    
    for(int i=a;i<=b;i++){
        int update=0;
        for(int count=2;count<i;count++){
            if(i%count==0){
                update++;
                break;
            }
        }
        if(update==0){
            cout<<i<<endl;
        }
    }
    return 0;
}