/*
    Return true if the given non-negative number is 1 or 2 more 
    than a multiple of 20.
    */
    
#include<iostream>

using namespace std;

int main(){
    
    int n;
    bool x, more20(int);
    
    cin>>n;
    
    x=more20(n);
    
    if(x==true)
        cout<<endl<<"TRUE"<<endl;
    else
        cout<<endl<<"FALSE"<<endl;
    
    return 0;
}

bool more20(int n){
    
    if(n>=0){
        if(n%20==1||n%20==2)
            return true;
        else
            return
        false;
    }
    else
        return false;
}