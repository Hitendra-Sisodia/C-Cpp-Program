#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int ans1,ans2,ans3,ans4;
    switch (1)
    {
        case(1):
            ans1=n/100;
            n%=100;
        
        case(2):
            ans2=n/50;
            n%=50;

        case(3):
            ans3=n/20;
            n%=20;
        
        case(4):
            ans4=n/1;
            n%=1;

        cout<<"No of 100 Notes:"<<ans1<<" "<<endl;
        cout<<"No of 50 Notes:"<<ans2<<" "<<endl;
        cout<<"No of 20 Notes:"<<ans3<<" "<<endl;
        cout<<"No of 1 Notes:"<<ans4<<" "<<endl;
    }
    return 0;
}