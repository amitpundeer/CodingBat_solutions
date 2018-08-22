/*
	Given two strings, append them together (known as "concatenation")
	and return the result. However, if the strings are different lengths,
	omit chars from the longer string so it is the same length as the
	shorter string. So "Hello" and "Hi" yield "loHi". 
	The strings may be any length.
	*/

#include<iostream>
#include<string.h>

using namespace std;
main(){
	char str1[20], str2[10];
	void minCat(char [], char []);

	cin.getline(str1,20);
	cin.getline(str2,10);

	minCat(str1,str2);

	puts(str1);
}

void minCat(char str1[], char str2[]){
	int len1=strlen(str1), len2=strlen(str2);

	if(len1>len2){
		int x=len1-len2, i, k=1;
		
		while(k<=x){
			for(i=0; i<len1; ++i)
				str1[i]=str1[i+1];
			++k;
			--len1;
		}
		strcat(str1,str2);
	}
	else if(len1<len2){
		int x=len2-len1, i, k=1;

		while(k<=x){
			for(i=0; i<len2; ++i)
				str2[i]=str2[i+1];
			++k;
			--len2;
		}
		strcat(str1,str2);
	}
	else
		strcat(str1,str2);
}