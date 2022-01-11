//Iterators in vectors
#include<bits/stdc++.h>
using namespace std;
int main()
{  
    vector<int> v={1,2,3,4};
    vector<int> ::iterator i;                          //accessing an vector using iterators
    for(i=v.begin();i!=v.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;


    cout<<"Next vector"<<endl;
    vector<pair<int,int>> v_pair={{1,2},{3,4},{5,6}};
    vector<pair<int,int>> ::iterator it;                                //shortcut also can be written of this synatax which shown in program number 13
    for(int i=0;i<v_pair.size();i++){
        cout<<v_pair[i].first<<" "<<v_pair[i].second<<endl;
    }
    for(it=v_pair.begin();it!=v_pair.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;                          //(*it).first <=> it->first ,both will give same values in case of vector of pairs
    }

    for(it=v_pair.begin();it!=v_pair.end();it++){
        cout<<(it->first)<<" "<<(it->second)<<endl;
    }
    return 0;
}