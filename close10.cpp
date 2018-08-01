/*
    Given 2 int values, return whichever value is nearest to the
    10, or return 0 in the event of a tie.
*/

#include<iostream>

using namespace std;

int main(){
    
    int x, y, z, close10(int, int);
    
    cout<<"Enter two numbers :\n";
    cin>>x>>y;
    
    z=close10(x,y);
    
    cout<<endl<<z<<endl;
    
    return 0;
}

int close10(int x, int y){
    
    int a=10-x, b=10-y;
    
    a=a<0?-a:a;
    b=b<0?-b:b;
    
    if(a<b)
        return x;
    else if(b<a)
        return y;
    else
        return 0;
}