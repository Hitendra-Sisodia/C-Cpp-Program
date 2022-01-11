//iterators using shortcut

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>> v_pair={{1,2},{3,4},{5,6}};   

    for(auto it=v_pair.begin();it!=v_pair.end();it++){                  
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }

    for(auto &value : v_pair){                                     //By using & same refrence is taken from the v_pair loop   
        value.first++;   
        cout<<value.first<<" "<< value.second<<endl;               //If we dont use & ditto copy is created of vector v and taken much more time complexity
    }                                                                      
    for(auto value : v_pair){                                      //same for loop work for(it=v.begin();it<v.end();it++)
        cout<<value.first<<" "<< value.second<<endl;
    }
    return 0;
}
