/*
	Given a string, if one or both of the first 2 chars is 'x', 
	return the string without those 'x' chars, and otherwise return
	the string unchanged. This is a little harder than it looks.
	*/

#include<iostream>
#include<string.h>

using namespace std;
main(){
	char str[10];
	void withoutX2(char []);

	cin.getline(str,10);

	withoutX2(str);

	puts(str);
}

void withoutX2(char str[]){
	int i, j, k=2;

	for(i=0; i<k; ++i)
		if(str[i]=='x'||str[i]=='X'){
			for(j=i; j<strlen(str); ++j)
				str[j]=str[j+1];

			if(i==0){
				i=-1;
				--k;
			}
		}
}