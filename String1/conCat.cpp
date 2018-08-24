/*
	Given two strings, append them together (known as "concatenation")
	and return the result. However, if the concatenation creates a 
	double-char, then omit one of the chars, so "abc" and "cat" 
	yields "abcat".
	*/
#include<iostream>
#include<cstring>

using namespace std;
main(){
	char str1[15], str2[15];
	void conCat(char [], char []);

	cin.getline(str1,15);
	cin.getline(str2,15);

	conCat(str1,str2);

	puts(str1);
}

void conCat(char str1[], char str2[]){
	int len1=strlen(str1), len2=strlen(str2), i, j, k;

	if(len1==len2){
		for( (i=len1-1, j=0, k=len1); (i>=0, j<len2); (--i, ++j) )
			if(str1[i]!=str2[j]){
				str1[k]=str2[j];
				++k;
			}
		str1[k]='\0';
	}
	else if(len1>len2){
		for( (i=len1-1, j=0, k=len1); (i>=(len1-len2), j<len2); (--i, ++j) )
			if(str1[i]!=str2[j]){
				str1[k]=str2[j];
				++k;
			}
		str1[k]='\0';
	}
	else{
		for( (i=len1-1, j=0, k=len1); (i>=0, j<len1); (--i, ++j) )
			if(str1[i]!=str2[j]){
				str1[k]=str2[j];
				++k;
			}
		for(i=j; i<len2; ++i,++k)
			str1[k]=str2[i];
		str1[++k]='\0';
	}
}