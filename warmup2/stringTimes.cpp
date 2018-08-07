/*
    Ques - Given a string and a non-negative int n, return a larger string
           that is n copies of the original string.
*/

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    
    char str[50];
    int n;
    void stringTimes(char [], int);
    
    cout<<"Enter a string :\n";
    cin.getline(str,30);
    
    cout<<"Enter a non-negative number : ";
    cin>>n;
    
    if(n>0){
        
        stringTimes(str,n);
        
        cout<<endl;
        puts(str);
    }
    else
        cout<<"Non-negative number only!!! ";
    
    return 0;
}

void stringTimes(char str[], int n){
    
    char arr[50];
    
    strcpy(arr,str);
    
    while(n>1){
        
        strcat(str,arr);
        --n;
    }
}