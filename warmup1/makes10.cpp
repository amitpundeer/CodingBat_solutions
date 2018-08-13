/*
    Given 2 ints, a and b, return true if one if them is 10 or if their sum is 10.
    */

#include<iostream>

using namespace std;

main(){
    int a, b;
    bool x, makes10(int, int);
    
    cin>>a>>b;
    
    x=makes10(a,b);
    if(x==1)
        cout<<endl<<"TRUE"<<endl;
    else
        cout<<endl<<"FALSE"<<endl;
}

int makes10(int a, int b){
    if((a==10&&b!=10)||(a!=10&&b==10))
        return true;
    else if((a+b)==10)
        return true;
    else
        return false;
}