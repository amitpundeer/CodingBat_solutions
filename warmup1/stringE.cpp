/*
    Return true if the given string contains between 1 and 3 'e' chars.


*/

#include<iostream>

using namespace std;

main(){
    
    char str[40];
    bool x, stringE(char []);
    
    cin.getline(str,40);
    
    x=stringE(str);
    
    if(x==1)
        cout<<endl<<"TRUE"<<endl;
    else
        cout<<endl<<"FALSE"<<endl;
    
    return 0;
}

bool stringE(char str[]){
    
    int count=0, len;
    
    for(len=0; str[len]!='\0'; ++len);
    
    for(int i=0; str[i]!='\0'; ++i)
        if(str[i]=='e')
            ++count;
    
    if(count>=1&&count<=3)
        return true;
    
    return false;
}