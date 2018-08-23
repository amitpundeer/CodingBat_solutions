/*
	Given 2 strings, a and b, return a string of the form 
	short+long+short, with the shorter string on the outside and 
	the longer string on the inside. The strings will not be 
	the same length, but they may be empty (length 0).
	*/
#include<iostream>
#include<cstring>

using namespace std;
main(){
	char str1[15], str2[15];
	void comboString(char [], char []);

	cin.getline(str1,15);
	cin.getline(str2,15);

	comboString(str1,str2);
}

void comboString(char str1[], char str2[]){
	int len1=strlen(str1), len2=strlen(str2);

	if(len1<len2){
		char copystr[15];

		strcpy(copystr,str1);

		strcat(str1,str2);
		strcat(str1,copystr);

		puts(str1);
	}
	else if(len1>len2){
		char copystr[15];
		
		strcpy(copystr,str2);

		strcat(str2,str1);
		strcat(str2,copystr);

		puts(str2);
	}
}