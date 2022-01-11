//maps and its usage 
#include<bits/stdc++.h>                 //maps are the datastructures which stores key and value pairs default itself and each key is sorted orders in discontionus memory 
using namespace std;                    //An maps doesn't allows multiple key an next input with the same key is ignored.

void printfun(map<int,string> &m)
{   
    map<int,string> ::iterator it;
    cout<<"size:"<<m.size()<<endl;                            //we can also use as
    for(it=m.begin();it!=m.end();it++){                       //for(auto it &pr : m)
        cout<<(*it).first<<" "<<(*it).second<<endl;           //cout<<pr.first<<" "<<pr.second<<endl;
    }
}


int main()
{   
    map<int,string> m={{100,"Hitendra"}};  
    m.insert(make_pair(101,"ujesh"));             
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        string xstring;
        cin>>x>>xstring;
        m.insert({x,xstring});           //insert function do samework as push_back function do in vectors
    }                                  

    //we can also replace 200 value with any value entered by the user.
    //we can use m.find() to search any key inside map.
    auto it=m.find(101);   
    if(it==m.end()){                     //If key found it return the iterator of the key and value that can be accessed as using first and second fucntion
        cout<<"Not found"<<endl;         //If key not found then it return the iterator same as the m.end()
    }
    else{
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    if(it!=m.end()){
        m.erase(it);         //erase the key value pair from the maps. for erasing the key from the map, key must be present other it gives error.
    }

    //m.clear();              //clear whole map at once
    printfun(m);
    return 0;
}