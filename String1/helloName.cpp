/*
	Given a string name, e.g. "Bob", return a greeting of the form
	 "Hello Bob!".
	 */

#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char str[20];
	void helloName(char []);

	cin.getline(str,20);

	helloName(str);

	puts(str);

	return 0;
}

void helloName(char str[]){
	int len=strlen(str);

	len+=6;

	for(int i=len; i>5; --i)
		str[i]=str[i-6];

	str[0]='H';
	str[1]='e';
	str[2]='l';
	str[3]='l';
	str[4]='o';
	str[5]=' ';
}
