/*
	Given a string, return a new string made of 3 copies of the
	first 2 chars of the original string. The string may be any
	length. If there are fewer than 2 chars, use whatever is there.
	*/
#include<iostream>
#include<string.h>
using namespace std;

main(){
	char str[10];
	void extraFront(char []);

	cin.getline(str,10);

	extraFront(str);

	puts(str);
}

void extraFront(char str[]){
	int len=strlen(str), i;

	if(len>=2){
		int k=1, j=2;
		while(k<3){
			for(i=0; i<2; ++i, ++j)
				str[j]=str[i];		//str[j]='\0';
			++k;
		}
		str[j]='\0';
	}
	else if(len==1){
		int k=1;
		while(k<3){
			str[k]=str[0];
			++k;
		}
		str[k]='\0';
	}
}