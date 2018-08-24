/*
	Given a string, if the first or last chars are 'x', return 
	the string without those 'x' chars, and otherwise return 
	the string unchanged.
	*/
#include<iostream>
#include<cstring>

using namespace std;
main(){
	char str[15];
	void withoutX(char []);

	cin.getline(str,15);

	withoutX(str);

	puts(str);
}

void withoutX(char str[]){
	int len=strlen(str), i;

	if(str[0]=='x'||str[0]=='X'){
		if(str[len-1]=='x'){
			for(i=0; i<len-1; ++i)
				str[i]=str[i+1];
			str[len-2]='\0';
		}
		else
			for(i=0; i<len; ++i)
				str[i]=str[i+1];
	}

	if(str[len-1]=='x')
		str[len-1]='\0';
}