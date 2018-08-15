/*
    Given a string, return a string made of the chars at indexes 0,1, 4,5, 8,9 ...
    so "kittens" yields "kien".
    */

#include<iostream>

using namespace std;

main(){
    char str1[20],str2[20];
    void altPairs(char [], char []);
    
    cin.getline(str1,20);
    
    altPairs(str1,str2);
    
    puts(str2);
}

void altPairs(char str1[], char str2[]){
    int len=0, i=0, k=0;
    
    for(; str1[len]!='\0'; ++len);
    
    for(; i<=len;){
        
        str2[k]=str1[i];
        ++k;
        ++i;
        
        if(i<len){
            str2[k]=str1[i];
            i+=3;
            ++k;
        }
    }
}