/*
    Given two int values, return their sum. Unless the two values
    are the same, then return double their sum.
    */

#include<iostream>

using namespace std;

main(){
    int a, b, sumDouble(int, int);
    
    cin>>a>>b;
    
    cout<<sumDouble(a,b)<<endl;
}

int sumDouble(int a, int b){
    if(a==b)
        return 2*(a+b);
    else
        return (a+b);
}