/*
    Given two int values, return true if they are both in the
    range 30...40 inclusive, or they are both in the range
    40...50 inclusive.
*/

#include<iostream>

using namespace std;

int main(){
    
    int x, y;
    bool a, in3050(int, int);
    
    cout<<"Enter two integers values :\n";
    cin>>x>>y;
    
    a=in3050(x,y);
    
    if(a==true)
        cout<<endl<<"TRUE !!!"<<endl;
    else
        cout<<endl<<"FALSE !!!"<<endl;
    
    return 0;
}

bool in3050(int x, int y){
    
    if((x>=30&&x<=40)&&(y>=30&&y<=40))
        return true;
    else if((x>=40&&x<=50)&&(y>=40&&y<=50))
        return true;
    else
        return false;
}