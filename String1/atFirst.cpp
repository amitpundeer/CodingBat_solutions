/*
	Given a string, return a string length 2 made of its first 2 chars.
	If the string length is less than 2, use '@' for the missing chars.
	*/

#include<iostream>
#include<cstring>

using namespace std;
main(){
	char str[10];
	void atFirst(char []);

	cin.getline(str,10);

	atFirst(str);

	puts(str);
}

void atFirst(char str[]){
	int len=strlen(str);

	if(len==0){
		str[0]=str[1]='@';
		str[2]='\0';
	}
	else if(len==1){
		str[1]='@';
		str[2]='\0';
	}
	else if(len>2)
		str[2]='\0';
}