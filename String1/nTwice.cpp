/*
	Given a string and an int n, return a string made of the first 
	and last n chars from the string. The string length will be 
	at least n.
	*/
#include<iostream>
#include<cstring>

using namespace std;
main(){
	char str[15];
	int n;
	void nTwice(char [], int);

	cin.getline(str,15);
	cin>>n;

	nTwice(str,n);
}

void nTwice(char str[], int n){
	int len=strlen(str), i, j;

	char copystr[15];

	strcpy(copystr,str);

	if(n<=len){
		for(i=n, j=len-n; j<len; ++i, ++j)
			str[i]=copystr[j];

		str[i]='\0';

		puts(str);
	}
}