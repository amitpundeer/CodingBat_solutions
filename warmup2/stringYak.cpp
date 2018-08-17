/*
    Suppose the string "yak" is unlucky. Given a string, return 
    a version where all the "yak" are removed, but the "a" can be
    any char. The "yak" strings will not overlap.
    */

#include<iostream>

using namespace std;

main(){
    char str[30];
    void stringYak(char []);
    
    cin.getline(str,30);
    
    stringYak(str);
    
    puts(str);
}

void stringYak(char str[]){
    int i;
    
    for(i=0; str[i]!='\0'; ++i)
        if(str[i]=='y')
            if(str[i+2]=='k'){
                
                int len, j, k=1;
                
                for(len=0; str[len]!='\0'; ++len);
                
                while(k<=3){
                    for(j=i; j<len; ++j)
                        str[j]=str[j+1];
                    ++k;
                    --len;
                }
                --i;
            }
}