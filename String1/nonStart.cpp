/*
	Given 2 strings, return their concatenation, except omit the
	 first char of each. The strings will be at least length 1.
	 */

#include<iostream>
#include<string.h>
using namespace std;

main(){
	char str1[20], str2[20];
	void nonStart(char [], char []);

	cin.getline(str1,20);
	cin.getline(str2,20);

	nonStart(str1,str2);

	puts(str1);
}

void nonStart(char str1[], char str2[]){
	int len1, len2, i, j;

	len1=strlen(str1);
	len2=strlen(str2);

	if(len1>0&&len2>0){
		for(i=0; i<len1; ++i)
			str1[i]=str1[i+1];
		--len1;

		for(j=0; j<len2; ++j)
			str2[j]=str2[j+1];
		--len2;

		strcat(str1,str2);
	}
}