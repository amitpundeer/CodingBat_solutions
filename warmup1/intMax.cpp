/*
    Given three int values a, b, c, return the largest
*/

#include<iostream>

using namespace std;

int main(){
    
    int x, y, z, a, intMax(int, int, int);
    
    cout<<"Enter three int values :\n";
    cin>>x>>y>>z;
    
    a=intMax(x,y,z);
    
    cout<<endl<<a<<endl;
    
    return 0;
}

int intMax(int x, int y, int z){
    
    if(x>y)        
        if(x>z)
            return x;
    
    if(y>x)
        if(y>z)
            return y;
    
    if(z>x)
        if(z>y)
            return z; 
}