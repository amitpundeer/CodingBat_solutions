/*
    When squirrels get together for a party, they like to have cigars. A squirrel
    party is successful when number of cigars is between 40 and 60, inclusive. 
    Unless it is the weekend, in which case there is no upper bound on the number 
    of cigars. Return true if the party with the given values is successful, or
    false otherwise.
    */
    
#include<iostream>

using namespace std;

int main(){
    
    bool x, weekend, cigarParty(int, bool);
    int cigars;
    
    cin>>weekend;   //Enter 1 if it is a weekend and 0 if it isn't.
    cin>>cigars;
    
    x=cigarParty(cigars,weekend);
    
    if(x==true)
        cout<<endl<<"TRUE"<<endl;
    else
        cout<<endl<<"FALSE"<<endl;
    
    return 0;
}

bool cigarParty(int cigars, bool weekend){
    
    if(weekend==true){
        if(cigars>=40)
            return true;
        else
            return false;
    }
    else{
        if(cigars>=40&&cigars<=60)
            return true;
        else
            return false;
    }
}