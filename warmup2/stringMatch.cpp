/*
    Given 2 strings, a and b, return the number of the positions where they contain
    the same length 2 substring. So "xxcaazz" and "xxbaaz" yields 3, since 
    the "xx", "aa", and "az" substrings appear in the same place in both strings.
    */

#include<iostream>

using namespace std;

main(){
    char str1[20], str2[20];
    int stringMatch(char [], char []);
    
    cin.getline(str1,20);
    cin.getline(str2,20);
    
    cout<<stringMatch(str1,str2)<<endl;
}

int stringMatch(char str1[], char str2[]){
    int x=0, len1, len2, i;
    
    for(len1=0; str1[len1]!='\0'; ++len1);
    for(len2=0; str2[len2]!='\0'; ++len2);
    
    for(i=0; i<len1&&i<len2; ++i){
        if(str1[i]==str2[i])
            if(str1[i+1]==str2[i+1])
                ++x;
    }
    
    return x;
}