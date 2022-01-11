//how to input an array of an paired vector
#include<bits/stdc++.h>
using namespace std;

void printVec(vector<pair<string,int>> &v){          //v_pair[i] is now converted into v value as same reference is taken
    cout<<"Size:"<<v.size()<<endl;
    for(int j=0;j<v.size();j++){
        cout<<v[j].first<<" " <<v[j].second<<endl;
    }
}



int main()
{   
    int N;            //N decided that how many paired vector should be created
    cin>>N;
    vector<pair<string,int>> v_pair[N];
    for(int i=0;i<N;i++){
        int n;               //each vector of ith value contain nth elements depend on n size
        cin>>n;
        for(int j=0;j<n;j++){
            string num1;
            int num2;
            cin>>num1>>num2;
            v_pair[i].push_back(make_pair(num1,num2));
        }
    }


    for(int i=0;i<N;i++){
        printVec(v_pair[i]);
    }
    return 0;
}