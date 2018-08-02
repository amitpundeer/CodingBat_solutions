/*
    Given a string, return a new string where the last 3 chars
    are now in upper case. If the string has less than 3 chars,
    uppercase whatever is there.
*/

#include<iostream>
#include<ctype.h>

using namespace std;

int main(){
    
    char str[20];
    int len;
    void endUp(char [], int);
    
    cout<<"Enter a string :\n";
    gets(str);
    
    for(len=0; str[len]!='\0'; ++len);
    
    endUp(str,len);
    
    cout<<endl<<"String now is :\n";
    puts(str);
    
    return 0;
}

void endUp(char str[], int len){
    
    char ch;
    
    if(len<=3){
        
        for(int i=0; i<len; ++i){
            
            ch=str[i];
            
            ch=toupper(ch);
            
            str[i]=ch;
        }
    }
    else{
        
        for(int i=len-1; i>=len-3; --i){
            
            ch=str[i];
            
            ch=toupper(ch);
            
            str[i]=ch;
        }
    }
}