/*
    Given a string, take the last char and return a new string with the last char added at the front and back,
    so "cat" yields "tcatt". The original string will be length 1 or more.
*/

#include<iostream>

using namespace std;

int main()
{
    char str[40];
    int len;
    void backAround(char[], int );
    
    cout<<"Enter a string :\n";
    gets(str);
    
    for(len=0; str[len]!='\0'; ++len);
    
    backAround(str,len);
    
    cout<<endl<<"After backAround, the string becomes :\n";
    puts(str);
    
    return 0;
}

void backAround(char str[], int len)
{
    char ch=str[len-1];
    
    len+=1;
    
    for(int i=len-1; i>0; --i)
        str[i]=str[i-1];
    
    len+=1;
    
    str[len-1]=ch;
    str[len]='\0';
    str[0]=ch;
}