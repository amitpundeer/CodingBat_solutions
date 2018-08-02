/*
    Ques - We'll say that a number is "teen" if it is in the range
           13...19 inclusive. Given 3 iint values, return true 
           if 1 or more of them are teen.
*/

#include<iostream>

using namespace std;

int main(){
    
    int x, y, z;
    bool a, hasTeen(int, int, int);
    
    cout<<"Enter three numbers :\n";
    cin>>x>>y>>z;
    
    a=hasTeen(x,y,z);
    
    if(a==true)
        cout<<endl<<"TRUE !!!"<<endl;
    else
        cout<<endl<<"FALSE !!!"<<endl;
    
    return 0;
}

bool hasTeen(int x, int y, int z){
    
    if(x>=13&&x<=19)
        return true;
    else if(y>=13&&y<=19)
        return true;
    else if(z>=13&&y<=19)
        return true;
    else
        return false;
}