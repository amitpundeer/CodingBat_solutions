/*
    Given a string, return the count of the number of times that
    a substring length 2 appears in the string and also as
    the last 2 chars of the string, so "hixxxhi" yields 1
    (we won't count the end substring).
    */

#include<iostream>

using namespace std;

main(){
    char str[20];
    int x, last2(char []);
    
    cin.getline(str,20);
    
    x=last2(str);
    
    cout<<x<<endl;
}

int last2(char str[]){
    int count=0, len=04, i=0;
    
    for(; str[len]!='\0'; ++len);
    
    for(; i<(len-2); ++i){
        if(str[i]==str[len-2])
            if(str[i+1]==str[len-1])
                ++count;
    }
    
    return count;
}