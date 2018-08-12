/*
    The number 6 is a truly great number. Given two int values, a and b,
    return true if either one is 6. Or if their sum or difference is 6.
    */
    
#include<iostream>

using namespace std;

int main(){
    
    bool x, love6(int, int);
    int a, b;
    
    cin>>a>>b;
    
    x=love6(a,b);
    
    if(x==true)
        cout<<endl<<"TRUE"<<endl;
    else
        cout<<endl<<"FALSE"<<endl;
    
    return 0;
}

bool love6(int a, int b){
    
    if(a==6||b==6)
        return true;
    else if((a+b)==6)
        return true;
    else if((a-b)==6)
        return true;
    else if((b-a)==6)
        return true;
    else
        return false;
}