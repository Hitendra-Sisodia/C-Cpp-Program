//how to take input of an vectorvectorpair

#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int N;
    cin>>N;
    vector<vector<pair<int,int>>> v_vec_pair;
    for(int i=0;i<N;i++){
        int n;
        cin>>n;
        vector<pair<int,int>> temp;                                  // instead of creating an temp vector we also create as
        for(int j=0;j<n;j++){                                        // v_vec_pair.push_back(vector<int> ());         
            int num1,num2;                                           // this vector considered as an empty vector now we can directly push  using below conventions
            cin>>num1>>num2;                                         //v_vec_pair[i].pushback(make_pair(num1,num2));
            temp.push_back(make_pair(num1,num2));                    //here v_vec_pair[i] resprsent an vector and [i] value also represent an vector
        }                                                            //so we directly push an vector inside an vector using this convention. 
        v_vec_pair.push_back(temp);                                                 //These green comments are only applicable in push and pop or taking input
    }                                                                               //for printing the elements other convenction get follows       

    for(int i=0;i<v_vec_pair.size();i++){                                           //v_vec_pair -> v -> represent an single vector
        cout<<"Size:"<<v_vec_pair[i].size()<<endl;                                  //v_vec_pair[i] -> v[i] -> represent an vector of vector
        for(int j=0;j<v_vec_pair[i].size();j++){                                    //v_vec_pair[i][j] -> v[i][j] -> represent an triple vector i.e vector of vector of vector
            cout<<v_vec_pair[i][j].first<< " "<<v_vec_pair[i][j].second<<endl;
        }
    }
    return 0;
}