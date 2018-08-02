/*
    Given a non-empty string and an int N, return the string made
    starting with char 0, and then every Nth char of the string.
*/

#include<iostream>

using namespace std;

int main(){
    
    char str[40];
    int n;
    void everyNth(char [], int);
    
    cout<<"Enter a string :\n";
    cin.getline(str,40);
    
    cout<<endl<<"Enter a number also : ";
    cin>>n;
    
    everyNth(str,n);
    
    return 0;
}

void everyNth(char str[], int n){
    
    int len;
    
    for(len=0; str[len]!='\0'; ++len);
    
    for(int i=0; i<len; i=i+n)
        cout<<str[i];
    
    cout<<endl;
}