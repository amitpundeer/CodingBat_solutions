/*
    Ques - Return true if the given string begins with "mix", 
    except the 'm' can be anything, so "pix", "9ix".. all count.
*/

#include<iostream>

using namespace std;

int main(){
    
    char str[20];
    bool x, mixStart(char []);
    
    cout<<"Enter string :\n";
    gets(str);
    
    x=mixStart(str);
    
    if(x==true)
        cout<<endl<<"TRUE !!! "<<endl;
    else
        cout<<endl<<"FALSE !!! "<<endl;
    
    return 0;
}

bool mixStart(char str[]){
    
    if((str[1]=='i'&&str[2]=='x')&&(str[3]==' '||str[3]=='\0'))
        return true;
    else
        return false;
}