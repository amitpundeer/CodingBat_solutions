/*
    Given a string, return a string made of the chars at indexes 0,1, 4,5, 8,9 ...
    so "kittens" yields "kien".
    */

#include<iostream>

using namespace std;

main(){
    char str[20];
    void altPairs(char []);
    
    cin.getline(str,20);
    
    altPairs(str);
    
    puts(str);
}

void altPairs(char str[]){
    int len=0, k=0, i=0;
    
    for(; str[len]!='\0'; ++len);
    
    for(; i<len;){
        str[k]=str[i];
        ++k;
        ++i;
        str[k]=str[i];
        ++k;
        i+=3;
    }
    str[k]='\0';
}