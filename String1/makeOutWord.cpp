/*
	Given an "out" string length 4, such as "<<>>", and a word, 		return a new string where the word is in the middle of the out 		string, e.g. "<<word>>".
*/

#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char str[30];
	void makeOutWord(char []);
	
	cin.getline(str,30);
	
	makeOutWord(str);
	
	puts(str);
	
	return 0;
}

void makeOutWord(char str[]){
	
	int len=strlen(str), i, j;
	
	len+=2;

	for(i=len; i>1; --i)
		str[i]=str[i-2];

	str[0]='<';
	str[1]='<';

	len+=2;

	str[len-2]='>';
	str[len-1]='>';
}
