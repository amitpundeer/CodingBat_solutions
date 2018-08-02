/*
    Given two non-negative int values, return true
    if they have the same last digit, such as with
    27 and 57.
*/

#include<iostream>

using namespace std;

int main(){
    
    int x, y;
    bool a, lastDigit(int, int);
    
    cout<<"Enter two numbers :\n";
    cin>>x>>y;
    
    a=lastDigit(x,y);
    
    if(a==true)
        cout<<endl<<"TRUE !!!"<<endl;
    else
        cout<<endl<<"FALSE !!!"<<endl;
    
    return 0;
}

bool lastDigit(int x, int y){
    
    int a, b, last(int);
    
    a=last(x);
    
    b=last(y);
    
    if(a==b)
        return true;
    else
        return false;
}

int last(int x){
    
    if(x%10==0)
        return 0;
    else
        return x%10;
}