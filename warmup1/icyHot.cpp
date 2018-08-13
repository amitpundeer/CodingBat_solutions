/*
    Given two temperatures, return true if one is less than 0
    and the other is greater than 100.
*/

#include<iostream>

using namespace std;

main(){
    
    int temp1, temp2;
    bool x, icyHot(int, int);
    
    cin>>temp1>>temp2;
    
    x=icyHot(temp1,temp2);
    
    if(x==1)
        cout<<endl<<"TRUE"<<endl;
    else
        cout<<endl<<"FALSE"<<endl;
}

bool icyHot(int temp1, int temp2){
    if((temp1<0&&temp2>100)||(temp1>100&&temp2<0))
        return true;
    else
        return false;
}