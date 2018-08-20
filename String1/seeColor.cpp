/*
	Given a string, if the string begins with "red" or "blue" 
	return that color string, otherwise return the empty string.
	*/

#include<iostream>
using namespace std;

main(){
	char str[10];
	void seeColor(char []);

	cin.getline(str,10);

	seeColor(str);

	puts(str);
}

void seeColor(char str[]){
	if(str[0]=='R'||str[0]=='r'){
		if(str[1]=='e')
			if(str[2]=='d')
				str[3]='\0';
	}
	else if(str[0]=='B'||str[0]=='b'){
		if(str[1]=='l')
			if(str[2]=='u')
				if(str[3]=='e')
					str[4]='\0';
	}
	else
		str[0]='\0';
}