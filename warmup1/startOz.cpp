/*
    Given a string, return a string made of the first 2 chars
    (if present), however include first char only if it is 'o'
    and include the second only if it is 'z',
    so "ozymandias" yields "oz".
    */

#include<iostream>

using namespace std;

main(){
    char str[30];
    void startOz(char []);
    
    cin.getline(str,30);
    
    startOz(str);
    
    puts(str);
    
}

void startOz(char str[]){
    int len=0;
    
    for(; str[len]!='\0'; ++len);
    
    if(str[0]=='o'){
        if(str[1]=='z'){
            str[2]='\0';
            len=3;
        }
        else{
            str[1]='\0';
            len=2;
        }
    }
    else if(str[1]=='z'){
        str[0]=str[1];
        str[1]='\0';
        len=2;
    }
    
}