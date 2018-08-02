/*
    Ques - Given an int n, return the absolute difference between n and 21, 
           except return double the absolute difference if n is over 21.
           
*/

#include<iostream>

using namespace std;

int main()
{
    int n, diff21(int);
    
    cout<<"Enter a number : ";
    cin>>n;
    
    if(n<22)
        cout<<endl<<"Absoulte difference between "<<n<<" and 21 is : "<<diff21(n)<<endl;
    else
        cout<<endl<<"Double the absolute difference between "<<n<<" and 21 is : "<<diff21(n)<<endl;
    
    return 0;
}

int diff21(int n)
{
    if(n<22)
        return (21-n);
    else
        return (2*(n-21));
}