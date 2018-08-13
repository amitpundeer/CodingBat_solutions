/*
    Given 2 int values, return true if one is negative and one 
    is positive. Except if the parameter "negative" is true,
    then return true only if both are negative.
*/

#include<iostream>

using namespace std;

main(){
    
    int a, b;
    bool x, neg, posNeg(int, int, bool);
    
    cin>>a>>b;
    cin>>neg;   //Enter 1 if "neg=negative" is true and 0 otherwise.
    
    x=posNeg(a,b,neg);

    if(x==1)
        cout<<endl<<"TRUE"<<endl;
    else
        cout<<endl<<"FALSE"<<endl;
    
    return 0;
}

bool posNeg(int a, int b, bool neg){
    
    if(neg==1){
        if(a<0&&b<0)
            return true;
        else
            return false;
    }
    else{
        if((a<0&&b>0)||(a>0&&b<0))
            return true;
        else
            return false;
    }
}