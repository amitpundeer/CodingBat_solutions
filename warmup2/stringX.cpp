/*
    Given a string, return a version where all the "x" have been 
    removed. Except an "x" at the very start or end should not be
    removed.*/

#include<iostream>
#include<string.h>

using namespace std;

main(){
    char str[30];
    void stringX(char []);
    
    cin.getline(str,30);
    
    stringX(str);
    
    puts(str);
}

void stringX(char str[]){
    int len=strlen(str), i;
    
    for(i=1; i<(len-1); ++i)
        if(str[i]=='x'){
            for(int j=i; j<len; ++j)
                str[j]=str[j+1];
        --i;
        --len;
    }
}