/*
    We have a loud talking parrot. The "hour" parameter is 
    the current hour time in the range 0..23. We are in trouble
    if the parrot is talking and the hour is before 7 or after 20.
    Return true if we are in trouble.
*/

#include<iostream>

using namespace std;

main(){
    
    bool talking, x, parrotTrouble(bool, int);
    int hour;
    
    cin>>talking;   //enter 1 if talking and 0 otherwise.
    cin>>hour;
    
    x=parrotTrouble(talking,hour);
    
    if(x==1)
        cout<<endl<<"TRUE"<<endl;
    else
        cout<<endl<<"FALSE"<<endl;
    
    return 0;
}

bool parrotTrouble(bool talking, int hour){
    
    if(talking==1){
        if(hour<=7&&hour>=20)
            return true;
        else
            return false;
    }
    else
        return false;
}