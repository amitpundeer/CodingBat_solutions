/*
    Given a string, if the string "del" appears starting at index 1,
    return a string where that "del" has been deleted. Otherwise,
    return the string unchanged.
*/

#include<iostream>

using namespace std;

int main(){
    
    char str[30];
    void delDel(char[]);
    
    cout<<"Enter a string :\n";
    cin.getline(str,30);
    
    delDel(str);
    
    cout<<endl;
    puts(str);
    
    return 0;
}

void delDel(char str[]){
    
    int len, k=1;;
    
    for(len=0; str[len]!='\0'; ++len);
    
    if((str[1]=='d')&&(str[2]=='e')&&(str[3]=='l')){
        
        
        while(k<4){
            
            for(int i=1; i<len; ++i)
                str[i]=str[i+1];
            
            --len;
            ++k;
        }
    }
}