//how to input an vector of vectors

#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int N;
    cin>>N;
    vector<vector<int>> v_vec;                       //An vector of vector -> an multidimensional container with Nth row and nthcolumn in each vector
    for(int i=0;i<N;i++){                                 //we can increase as well as decrease the size of row and columns.
        int n;
        cin>>n;
        vector<int> temp;                                             //We can store an vector in vector if storing quanity is itself an vector.
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v_vec.push_back(temp);
    }

    for(int i=0;i<v_vec.size();i++){                         //v_vec.size() -> give the size of all rows present in vectors
        cout<<"Size:"<<v_vec[i].size()<<endl;                //v_vec[i].size() -> give the size each vectors -> how much element present in each row/ith/vector
        for(int j=0;j<v_vec[i].size();j++){
            cout<<v_vec[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}