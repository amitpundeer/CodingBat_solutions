/*
	Given a string, return a version without the first and last 
	char, so "Hello" yields "ell". The string length will 
	be at least 2.
	*/
#include<iostream>
#include<cstring>

using namespace std;
main(){
	char str[15];
	void withoutEnd(char []);

	cin.getline(str,15);

	withoutEnd(str);

	puts(str);
}

void withoutEnd(char str[]){
	int len=strlen(str), i;

	for(i=0; i<len-2; ++i)
		str[i]=str[i+1];

	str[i]='\0';
}