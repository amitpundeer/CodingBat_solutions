/*
    We have two monkeys, a and b, and the parameters
    aSmile and bSmile indicate if each is smiling.
    We are in trouble if they are both smiling or
    if neither of them is smiling.
    Return true if we are in trouble.
    */

#include<iostream>

using namespace std;

main(){
    
    bool aSmile, bSmile, x, monkeyTrouble(bool, bool);
    
    cin>>aSmile>>bSmile;    //enter 1 if smiling and 0 if not.
    
    x=monkeyTrouble(aSmile,bSmile);
    
    if(x==1)
        cout<<endl<<"TRUE"<<endl;
    else
        cout<<endl<<"FALSE"<<endl;
    
    return 0;
}

bool monkeyTrouble(bool aSmile, bool bSmile){
    
    if(aSmile==1&&bSmile==1)
        return true;
    else if(aSmile==0&&bSmile==0)
        return true;
    else
        return false;
}