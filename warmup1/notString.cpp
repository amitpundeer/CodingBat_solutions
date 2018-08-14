/*
    Given a string, return a new string where "not " has been added to the front.
    However, if the string already begins with "not", return the string unchanged.
    */

#include<iostream>
#include<string.h>

using namespace std;

main(){
    char str[30];
    void notString(char []);
    
    cin.getline(str,30);
    
    notString(str);
    
    puts(str);
}

void notString(char str[]){
    int i=0;
    
    if(str[i]!='n'||str[i]!='N'){
        ++i;
        if(str[i]!='o'){
            ++i;
            if(str[i]!='t'){
                int len1=0, len2;
        
                for(; str[len1]!='\0'; ++len1);
        
                len2=len1+4;
        
                for(; len1>=0; --len1,--len2)
                    str[len2]=str[len1];
        
                str[0]='n';
                str[1]='o';
                str[2]='t';
                str[3]=' ';
            }
        }
    }
}