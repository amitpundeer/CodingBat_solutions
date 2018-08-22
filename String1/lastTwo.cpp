/*
	Given a string of any length, return a new string where the
	last 2 chars, if present, are swapped, so "coding" yields "codign".
	*/

#include<iostream>
#include<string.h>

using namespace std;
main(){
	char str[10];
	void lastTwo(char []);

	cin.getline(str,10);

	lastTwo(str);

	puts(str);
}

void lastTwo(char str[]){
	int len=strlen(str);

	if(len>1){
		char last=str[len-1];

		str[len-1]=str[len-2];
		str[len-2]=last;
	}
}