/*
    The parameter weekday is true if it is a weekday,
    and the parameter vacation is true if we are on vacation.
    We sleep in if it is not a weekday or we're on vacation.
    Return true if we sleep in.
    */

#include<iostream>

using namespace std;

main(){
    
    bool weekday, vacation, x, sleepIn(bool, bool);
    
    cin>>weekday>>vacation; //Enter 1 for true answer and 0 for false.
    
    x=sleepIn(weekday,vacation);
    
    if(x==true)
        cout<<endl<<"TRUE"<<endl;
    else
        cout<<endl<<"FALSE"<<endl;
    
    return 0;
}

bool sleepIn(bool weekday, bool vacation){
    
    if(weekday==0){
        if(vacation==0||vacation==1)
            return true;
    }
    
    else if(weekday==1){       
        if(vacation==1)
            return true;
    }
    
    return false;
}