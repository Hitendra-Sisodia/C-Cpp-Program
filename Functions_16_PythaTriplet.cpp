#include<iostream>
using namespace std;

bool pytha(int x,int y,int z)
{
    int max=x;
    if(x<y){
        max=y;
    }
    if(x<z){
        max=z;
    }

    if(max==x){
        if((x*x)==(y*y+z*z)){
            return true;
        }
        else{
            return false;
        }
    }
    else if(max==y){
        if((y*y)==(x*x+z*z)){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        if((z*z)==(y*y+x*x)){
            return true;
        }
        else{
            return false;
        }
    }
}
int main()
{
    int a,b,c;
    cout<<"Enter the triplet:";
    cin>>a>>b>>c;

    if(pytha(a,b,c)){
        cout<<"Triplet";
    }
    else{
        cout<<"Non Triplet";
    }
    return 0;
}