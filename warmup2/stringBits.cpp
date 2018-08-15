/*
    Given a string, return a new string made of every other char
    starting with the first, so "Hello" yields "Hlo".
*/

#include<iostream>

using namespace std;

main(){
    char str[20];
    void stringBits(char []);
    
    cin.getline(str,20);
    
    stringBits(str);
    
    puts(str);
}

void stringBits(char str[]){
    int len=0, i, k;
    
    for(; str[len]!='\0'; ++len);
    
    for(i=0, k=0; i<=len; i+=2, ++k)
        str[k]=str[i];
    
    str[k]='\0';
}