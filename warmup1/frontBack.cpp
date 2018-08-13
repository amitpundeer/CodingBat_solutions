/*
    Given a string, return a new string where 
    the first and last chars have been exchanged.
    */

#include<iostream>

using namespace std;

main(){
    char str[40];
    void frontBack(char []);
    
    cin.getline(str,40);
    
    frontBack(str);
    
    puts(str);
    
    return 0;
}
void frontBack(char str[]){
    int len=0;
    
    for(; str[len]!='\0'; ++len);
    
    char a=str[0];
    
    str[0]=str[len-1];
    str[len-1]=a;
}
