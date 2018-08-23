/*
	Given a string, return the string made of its first two chars,
	so the String "Hello" yields "He". If the string is shorter than
	length 2, return whatever there is, so "X" yields "X", and 
	the empty string "" yields the empty string "". 
	*/
#include<iostream>
#include<cstring>

using namespace std;
main(){
	char str[15];
	void firstTwo(char []);

	cin.getline(str,15);

	firstTwo(str);

	puts(str);
}

void firstTwo(char str[]){
	int len=strlen(str);

	if(len>2)
		str[2]='\0';
}