//set // unorderd_set // multisets
#include<bits/stdc++.h>
using namespace std;

void printfun(set<string> &s)                       
{    
    cout<<"Size:"<<s.size()<<endl;
    for(auto &sets : s){
        cout<<sets<<" "<<endl;
    }
}



int main()
{  
    set<string> s;         //sets stores the unique "key" in sorted order as same time complexity as maps.
    s.insert("ABC");       //all function of maps like first,second,begin(),end(),find(X),erase(X),clear(),size() work on all types of sets
    int n;                 //Unordered sets are same as unordered maps which stores the key in random orders i.e without any sorting. 
    cin>>n;                //An Unordered sets and unordered maps can only stores simple datastructures like string,float,int,double it can't contain complex data structures
    for(int i=0;i<n;i++){  //Multisets are same as multi_map with can stores same key in sorted order.
        string x;          //But deeltion of element in multi case is little bit tricky as same key are present there can be two case for the the deletion of the same element.
        cin>>x;                  //1. If we use s.erase(*it) it will remove only first key which we can get from s.find("sre")
        s.insert(x);             //2. If we use s.erase("sre") it will remove all the values from the multisets or multimaps.
    }                            //also s.find() return the iterator(address) of the first key in multicases.

    auto it = s.find("sre");
    if(it!=s.end()){
        cout<<"Found:"<<(*it)<<endl;;
    }
    else{
        cout<<"Not found"<<endl;
    }

    if(it!=s.end()){
        s.erase(*it);    //erase function in sets and maps work on value as well iterators
       //s.erase(it);                  //eq-> s.erase(it) and s.erase("ABC") and s.erase(*it ) all are correct
       //s.erase("ABC");
    }
    printfun(s);
    return 0;
}