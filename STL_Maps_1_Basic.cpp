//sets-Sets are the collection of Unique elements placed in sorted order.

#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s={10,20,20};                        //working of iterator with set elements, iterator are also avilable in vectors.
    s.insert(30);           //10,20,30            //s.begain always gives address of first element of the set.
    auto it=s.begin();                            //s.end always give the address of non existing element of the set i.e, element after the last element of the set.
    cout<<*it<<endl;         //10                 //we can't access single element of the set we used iterator for accessing single of multi elements  
    cout<<s.count(20)<<endl;   //1            
    cout<<s.erase(20)<<endl;   //10 30

    for(int i=0;i<2;i++){
        cout<<*it<<" ";
        it++;
    }
    
    cout<<endl;
    for(int i=0;i<2;i++){
        cout<<s.size()<<endl;
        break;
    }
}
