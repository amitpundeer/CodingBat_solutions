/*
    Ques - Given a string, return true if the string starts with "hi"
           and fase otherwise.
*/

#include<iostream>

using namespace std;

int main(){
    
    char str[20];
    bool x, startHi(char []);
    
    cout<<"Enter a string :\n";
    gets(str);
    
    x=startHi(str);
    
    if(x==true)
        cout<<endl<<"TRUE !!!"<<endl;
    else
        cout<<endl<<"FALSE !!!"<<endl;
    
    return 0;
}   

bool startHi(char str[]){
    
    if((str[0]=='H'||str[0]=='h')&&(str[1]=='i')&&(str[2]==' '||str[2]=='\0'))
        return true;
    else 
        return false;
}