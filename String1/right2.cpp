/*
	Given a string, return a "rotated right 2" version where the 
	last 2 chars are moved to the start. The string length will 
	be at least 2.
	*/
#include<iostream>
#include<cstring>

using namespace std;
main(){
	char str[15];
	void right2(char []);

	cin.getline(str,15);

	right2(str);

	puts(str);
}

void right2(char str[]){
	int len=strlen(str);

	if(len==3){
		char a=str[2];
		str[2]=str[1];
		str[1]=str[0];
		str[0]=a;	
	}
	else if(len>3){
		char a=str[len-1], b=str[len-2];
		int i;

		for(i=len-1; i>1; --i)
			str[i]=str[i-2];

		str[0]=b;
		str[1]=a;
		} 
}