/*
    Ques - We'll say that a number is "teen" if it is in the range
           13...19 inclusive. Given two int values, return true if one 
           or the other is teen, but not both.
*/

#include<iostream>

using namespace std;

int main(){
    
    int x, y;
    bool a, loneTeen(int, int);
    
    cout<<"Enter two integers :\n";
    cin>>x>>y;
    
    a=loneTeen(x,y);
    
    if(a==true)
        cout<<endl<<"TRUE."<<endl;
    else
        cout<<endl<<"FALSE."<<endl;
    
    return 0;
}

bool loneTeen(int x, int y){
    
    int a=0;
    
    if(x>=13&&x<=19)
        a=1;
    
    if(a==1){
        if(y>=13&&y<=19)
            return false;
        else
            return true;
    }
    else if(y>=13&&y<=19)
        return true;
    
    return false;
}