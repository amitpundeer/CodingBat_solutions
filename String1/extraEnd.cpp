/*
	Given a string, return a new string made of 3 copies of the last
	2 chars of the original string. The string length will be 
	at least 2.
	*/
#include<iostream>
#include<cstring>

using namespace std;
main(){
	char str[15];
	void extraEnd(char []);

	cin.getline(str,15);

	extraEnd(str);

	puts(str);
}

void extraEnd(char str[]){
	int len=strlen(str), i;

	if(len==1){
		for(i=0; i<3; ++i)
			str[i]=str[0];
	
		str[i]='\0';
	}
	else{
		char a=str[len-2], b=str[len-1];

		for(i=0; i<6; ++i){
			str[i]=a;
			str[++i]=b;
		}

		str[i]='\0';
	}
	
}