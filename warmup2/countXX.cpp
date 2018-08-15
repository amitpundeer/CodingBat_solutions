/*
    Count the number of "xx" in the given string. We'll say that overlapping 
    is allowed, so "xxx" contains 2 "xx".
    */

#include<iostream>

using namespace std;

main(){
    char str[20];
    int countXX(char []);
    
    cin.getline(str,20);
    
    cout<<countXX(str)<<endl;
}

int countXX(char str[]){
    int i, x=0;
    
    for(i=0; str[i]!='\0'; ++i)
        if(str[i]=='x'||str[i]=='X')
            if(str[i+1]=='x'||str[i+1]=='X')
                ++x;
    return x;
}