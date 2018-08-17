/*
    Given a non-empty string like "Code" return a string like "CCoCodCode".
    */

#include<iostream>
#include<string.h>

using namespace std;

main(){
    char str[50];
    void stringSplosion(char []);
    
    cin.getline(str,50);
    
    stringSplosion(str);
    
    puts(str);
}

void stringSplosion(char str[]){
    char copystr[50];
    strcpy(copystr,str);
    int len=strlen(str), i=0, j, k=1;
    
    while(k<=len){
        for(j=0; j<k; ++j){
            str[i]=copystr[j];
            ++i;
        }
        //++i;
        ++k;
        
    }
    
}