//how to input an array of vectors from user
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int N;
    cin>>N;
    vector<int> v[N];             //v[N] Nth -> number of vector that inputed from user.
    for(int i=0;i<N;i++){
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }

    for(int i=0;i<N;i++){                         //loop for entering each vector
        cout<<"Size of vector"<<i+1<<":"<<v[i].size();
        for(int j=0;j<v[i].size();j++){          
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}