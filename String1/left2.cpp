/*
	Given a string, return a "rotated left 2" version where the 
	first 2 chars are moved to the end. The string length 
	will be at least 2.
	*/
#include<iostream>
#include<cstring>

using namespace std;
main(){
	char str[15];
	void left2(char []);

	cin.getline(str,15);

	left2(str);

	puts(str);
}

void left2(char str[]){
	int len=strlen(str), i;

	if(len>2){
		char a=str[0], b=str[1];

		for(i=0; i<len-2; ++i)
			str[i]=str[i+2];

		str[len-2]=a;
		str[len-1]=b;
	}
}