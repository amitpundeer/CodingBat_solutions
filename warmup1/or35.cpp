/*
    Return true if the given non-negative number is a 
    multiple of 3 or a multiple of 5. Use the % "mod" operator.
    */

#include<iostream>

using namespace std;

main(){
    int n;
    bool x, or35(int);
    
    cin>>n;
    
    x=or35(n);
    
    if(x==1)
        cout<<endl<<"TRUE"<<endl;
    else
        cout<<endl<<"FALSE"<<endl;
    
}

bool or35(int n){
    
    if(n>0){
        if(n%3==0||n%5==0)
            return true;
        else
            return false;
    }
    else
        return false;
}