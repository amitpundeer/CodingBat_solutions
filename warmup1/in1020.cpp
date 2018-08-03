/*
    Given 2 int values, return true if either of them is in the
    range 10...20 inclusive otherwise false.
*/

#include<iostream>

using namespace std;

int main(){
    
    int x, y;
    bool a, in1020(int, int);
    
    cout<<"Enter two integers :\n";
    cin>>x>>y;
    
    a=in1020(x,y);
    
    if(a==true)
        cout<<endl<<"TRUE."<<endl;
    else
        cout<<endl<<"FALSE."<<endl;
    
    return 0;
}

bool in1020(int x, int y){
    
    if(x>=10&&x<=20)
        return true;
    if(y>=10&&y<=20)
        return true;
    
    return false;
}