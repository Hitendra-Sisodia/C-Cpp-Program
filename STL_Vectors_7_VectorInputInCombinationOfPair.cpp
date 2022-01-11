//how to access elements froms vector of pairs
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>> v_pair={{2,3},{3,4}};

    //input vector from user
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int first,second;
        cin>>first>>second;
        v_pair.push_back(make_pair(first,second));
    }

    //for printing updated vector
    for(int i=0;i<v_pair.size();i++){
        cout<<v_pair[i].first <<" "<<v_pair[i].second<<endl;
    }
    return 0;
}