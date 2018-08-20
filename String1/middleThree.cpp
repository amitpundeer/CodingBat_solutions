/*
	Given a string of odd length, return the string length 3 from
	its middle, so "Candy" yields "and". The string length will be
	at least 3.
	*/

#include<iostream>
#include<string.h>
using namespace std;

main(){
	char str[20];
	void middleThree(char []);

	cin.getline(str,20);

	middleThree(str);

	puts(str);
}

void middleThree(char str[]){
	int len=strlen(str), i, x, k;

	if((len>3)&&(len%2!=0)){
		x=(len/2)-1;

		for(i=0, k=x; k<(x+3); ++i, ++k)
			str[i]=str[k];

		str[i]='\0';
	}
	else
		cout<<"There will be no change : ";
}