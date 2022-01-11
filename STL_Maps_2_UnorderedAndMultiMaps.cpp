//unordered maps

#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int> u_m;                      //An unordered maps stores the data in random form without any sorting from 
    int n;                                              //hence less time complexity than maps 
    cin>>n;                                             //multimaps are also similar to the maps but it  can stores multiple key with the same names in sorted orders.
    for(int i=0;i<n;i++){                               //all the function of the maps work on unordered maps as well as on multimaps.
        string x1;
        int x2;
        cin>>x1>>x2;
        u_m.insert(make_pair(x1,x2));
    }
    
    string num;
    cin>>num;
    auto it= u_m.find(num);

    if(it!=u_m.end()){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    if(it!=u_m.end()){
        u_m.erase(it);
    }

    cout<<"Size:"<<u_m.size()<<endl;
    for(auto u_maps : u_m){
        cout<<u_maps.first <<" "<<u_maps.second<<endl;
    }
    return 0;
}