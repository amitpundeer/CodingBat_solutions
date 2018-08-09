/*
    Ques - Given a string, we'll say that the front is the first
           3 chars of the string. If the string length is less 
           than 3, the front is whatever is there. Return a new string
           which is 3 copies of the front.
*/

#include<iostream>

using namespace std;

int main(){
    
    char str[30];
    int len;
    void front3(char[], int);
    
    cout<<"Enter a string :\n";
    cin.getline(str,30);
    
    for(len=0; str[len]!='\0'; ++len);
    
    front3(str,len);
    
    cout<<"String now is :\n";
    puts(str);
    
    return 0;
}

void front3(char str[], int len){
    
    int a=len;
    
    if(a==1){
        
        int k=1;
        
        while(k<3){
            
            ++len;
            int j=len;
            
            for(; j>0; --j)
                str[j]=str[j-1];
            
            ++k;
        }
    }
    else if(a==2){
        
        char b=str[0], c=str[1];
        
        for(int k=1; k<5; ++k)
            ++len;
        
        for(int k=2; k<len; k+=2)
            str[k]=b;
        for(int k=3; k<len; k+=2)
            str[k]=c;
    }
    else{
        
        char b=str[0], c=str[1], d=str[2];
        
        if(a<9)
            for(int x=a; x<9; ++x){
                
                ++len;
                str[x]=b;
            }
        else
            for(int x=a; x>9; --x){
                
                --len;
                str[x]=b;
            }
        
        for(int k=3; k<len; k+=3)
            str[k]=b;
        for(int k=4; k<len-1; k+=3)
            str[k]=c;
        for(int k=5; k<len-2; k+=3)
            str[k]=d;
    }
}