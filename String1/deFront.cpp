/*
	Given a string, return a version without the first 2 chars.
	Except keep the first char if it is 'a' and keep the second
	char if it is 'b'. The string may be any length.
	*/

#include<iostream>
#include<string.h>

using namespace std;
main(){
	char str[10];
	void deFront(char []);

	cin.getline(str,20);

	deFront(str);

	puts(str);
}

void deFront(char str[]){
	int i;

		if(str[0]=='a'||str[0]=='A'){
			if(str[1]!='b')
				for(i=1; i<strlen(str); ++i)
					str[i]=str[i+1];
		}
		else{
			if(str[1]=='b')
				for(i=0; i<strlen(str); ++i)
					str[i]=str[i+1];
			else{
				for(i=0; i<strlen(str)-2; ++i)
					str[i]=str[i+2];
				str[i]='\0';
			}
		}
}