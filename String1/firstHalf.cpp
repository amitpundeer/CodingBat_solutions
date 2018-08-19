/*
	Given a string of even length, return the first half. So the string "WooHoo" yields "Woo".
	*/

#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char str[20];
	void firstHalf(char []);

	cin.getline(str,20);

	firstHalf(str);

	puts(str);

	return 0;
}

void firstHalf(char str[]){
	int len=strlen(str);

	if(len%2==0)
		str[len/2]='\0';
}