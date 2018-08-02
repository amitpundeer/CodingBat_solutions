/*
    Given a non-empty string and an int n, return a new string where the char at index n has
    been removed. The value of n will be a valid index of a char in the original string 
    (i.e. n will be in the range 0 to str.length()-1 inclusive.)
*/

#include<iostream>

using namespace std;

int main()
{
    void missingChar(char[], int);
    char str[40];
    int n, len;
    
    cout<<"Enter a string : ";
    gets(str);
    
    cout<<endl<<"Enter a vaid index number : ";
    cin>>n;
    
    for(len=0; str[len]!='\0'; ++len);
    
    if(n<=len)
    {
        missingChar(str,n);
        
        cout<<endl<<"After removing character at index "<<n<<" , string becomes :\n";
        puts(str);
    }
    else
        cout<<endl<<"Enter a valid index number !!!"<<endl;
    
    return 0;
}

void missingChar(char str[], int n)
{
    for(int i=n; str[i]!='\0'; ++i)
        str[i]=str[i+1];
}