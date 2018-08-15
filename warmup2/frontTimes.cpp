/*
    Given a string and a non-negative int n, we'll say that the front of 
    the string is the first 3 chars, or whatever is there if the string 
    is less than length 3. Return n copies of the front;
    */

#include<iostream>

using namespace std;

main(){
    char str[20];
    int n;
    void frontTimes(char [], int);
    
    cin.getline(str,20);
    cin>>n;
    
    if(n>0){
        
        frontTimes(str,n);
        puts(str);
    }
}

void frontTimes(char str[], int n){
    
    int len=0;
    
    for(; str[len]!='\0'; ++len);
    
    if(len<=3){
        int k=len, x=1;
        
        while(x<n){
            
            for(int i=0; i<len; ++i){
            str[k]=str[i];
            ++k;
            }
            
            ++x;
        }
    }
    else{
        int k=3, x=1;
        
        if(n==1)
            str[3]='\0';
        
        else{
            while(x<n){
                
                for(int i=0; i<3; ++i){
                    str[k]=str[i];
                    ++k;
                }
            
                ++x;
            }
            ++k;
        }
    }
}