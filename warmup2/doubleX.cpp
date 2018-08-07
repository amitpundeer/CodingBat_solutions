/*
    Ques - Given a string, return true if the first instance of
    "x" in the string is immediately followed by another "x".
*/
#include<iostream>

using namespace std;

int main(){
  
  char str[30];
  bool x, doubleX(char []);
  
  cout<<"Enter a string :\n";
  cin.getline(str,30);
  
  x=doubleX(str);
  
  if(x==true)
    cout<<"TRUE\n";
    else
      cout<<"FALSE\n";
  
  return 0;
}

bool doubleX(char str[]){
  
  for(int i=0; str[i]!='\0'; ++i)
    if(str[i]=='x'){
       
       if(str[i+1]!='x')
           return false;
       break;
    }
        
  return true;
}