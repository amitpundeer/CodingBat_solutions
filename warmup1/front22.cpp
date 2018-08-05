/*
    Ques - Given a string, take the first two chars and return the
           string with the 2 chars added at both the front and back,
           so "kitten" yields "kikitten". If the length is less than
           2, use whatever chars are there.
*/

#include<iostream>

using namespace std;

int main(){
    
    char str[30];
    int len;
    void front22(char [], int);
    
    cout<<"Enter string :\n";
    cin.getline(str,30);
    
    for(len=0; str[len]!='\0'; ++len);
    
    front22(str,len);
    
    cout<<endl<<"string is :\n";
    puts(str);
    
    for(len=0; str[len]!='\0'; ++len);
    cout<<len;
    
    return 0;
}

void front22(char str[], int len){
    
    char a=str[0], b=str[1];
    
    if(len==1){
        
        int k=1;
        
        while(k<3){
            
            ++len;
            int j=len;
            
            for(; j>0; --j)
                str[j]=str[j-1];
            
            ++k;
        }
    }
    else if(len==2){
        
        int k=1;
        
        while(k<3){
            
            ++len;
            int j=len;
            
            for(; j>0; --j)
                str[j]=str[j-1];
            
            ++k;
        }
        
        str[1]=b;
        
        len+=2;
        
        str[4]=a;
        str[5]=b;
    }
    
    else{
        
        int k=1;
        
        while(k<3){
            
            ++len;
            int j=len;
            
            for(; j>0; --j)
                str[j]=str[j-1];
            
            ++k;
        }
        
        str[1]=b;
        
        len+=2;
        str[len-2]=a;
        str[len-1]=b;
        
        cout<<len;
    }
}