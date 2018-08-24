/*
	Given a string, return a version without both the first and 
	last char of the string. The string may be any length, 
	including 0.
	*/
#include<iostream>
#include<cstring>

using namespace std;
main(){
	char str[15];
	void withoutEnd2(char []);

	cin.getline(str,15);

	withoutEnd2(str);

	puts(str);
}

void withoutEnd2(char str[]){
	int len=strlen(str), i;

	for(i=0; i<len-2; ++i)
		str[i]=str[i+1];
	str[i]='\0';
}