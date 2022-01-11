//convert all letters of name from upper case to lowercase usind array and vice versa

#include<iostream>
using namespace std;
int main()
{
    char name[10];
    cout<<"Enter your name:";
    cin>>name;

    int ln=0;
    while(name[ln]!='\0'){                    //loop for getting the length of the string
        ln++;
    }
    
    char array[10];                          //array for storing updated value               

    for(int i=0;i<=ln-1;i++){ 
        if(name[i]>='A' && name[i]<='Z'){                          
            array[i]= int(name[i])+32;
        }
        else if(name[i]>='a' && name[i]<='z'){
            array[i]= int(name[i])-32;
        }
    }

    for(int j=0;j<=ln-1;j++){
        cout<<array[j];
    }
}