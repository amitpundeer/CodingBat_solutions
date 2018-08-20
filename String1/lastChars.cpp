/*
	Given 2 strings, a and b, return a new string made of the first
	char of a and the last char of b, so "yo" and "java" yields
	 "ya". If either string is length 0, use '@' for its missing char.
	 */

#include<iostream>
#include<string.h>
using namespace std;

main(){
	char str1[10], str2[10];
	void lastChars(char [], char []);

	cin.getline(str1,10);
	cin.getline(str2,10);

	lastChars(str1,str2);

	puts(str1);
}

void lastChars(char str1[], char str2[]){
	int len1, len2, i;

	len1=strlen(str1);
	len2=strlen(str2);

	if(len1!=0){
		if(len2!=0){
			str1[1]=str2[len2-1];
			str1[2]='\0';
		}
		else{
			str1[1]='@';
			str1[2]='\0';
		}
	}
	else{
		if(len2!=0){
			str1[0]='@';
			str1[1]=str2[len2-1];
			str1[2]='\0';
		}
		else{
			str1[0]='@';
			str1[1]='@';
			str1[2]='\0';
		}
	}
}