/*
    Given two positive int values, return the larger value
    that is in the range 10...20 inclusive, or return 0 if neither
    is in that range.
*/

#include<iostream>

using namespace std;

int main(){
    
    int x, y, a, max1020(int, int);
    
    cout<<"Enter two positive integers :\n";
    cin>>x>>y;
    
    if(x<0||y<0)
        return 0;
    else
        a=max1020(x,y);
    
    cout<<endl<<a<<endl;
    
    return 0;
}

int max1020(int x, int y){
    
    int a, b;
    
    if(x>=10&&x<=20)
        a=x;
    else
        a=0;
    
    if(y>=10&&y<=20)
        b=y;
    else
        b=0;
    
    if(a>=b)
        return a;
    else
        return b;
    
}