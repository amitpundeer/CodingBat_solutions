/*
    Given an int n, return true if it is within 10 of 100 or 200.
*/

#include<iostream>

using namespace std;

int main()
{
    int n;
    bool x, nearHundred(int);
    
    cout<<"Enter a number : ";
    cin>>n;
    
    x=nearHundred(n);
    
    if(x==true)
        cout<<endl<<"TRUE !!!"<<endl;
    else
        cout<<endl<<"FALSE !!!"<<endl;
    
    return 0;
}

bool nearHundred(int n)
{
    if((n>=90&&n<100)||(n>=190&&n<200))
        return true;
    else 
        return false;
}