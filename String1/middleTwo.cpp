/*
	Given a string of even length, return a string made of the 
	middle two chars, so the string "string" yields "ri". The 
	string length will be at least 2.
	*/
#include<iostream>
#include<cstring>

using namespace std;
main(){
	char str[16];
	void middleTwo(char []);

	cin.getline(str,16);

	middleTwo(str);
}

void middleTwo(char str[]){
	int len=strlen(str);

	if(len%2==0){
		int x=len/2-1;

		str[0]=str[x];
		str[1]=str[x+1];
		str[2]='\0';

		puts(str);
	}
}