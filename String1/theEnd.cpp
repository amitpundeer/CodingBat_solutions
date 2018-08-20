/*
	Given a string, return a string length 1 from its front, unless
	front is false, in which case return a string length 1 from its
	back. The string will be non-empty.
	*/

#include<iostream>
#include<string.h>
using namespace std;

main(){
	char str[10];
	bool front;
	void theEnd(char [], bool);

	cin.getline(str,10);
	cin>>front;	//Enter 1 if true and 0 if false

	theEnd(str,front);

	puts(str);
}

void theEnd(char str[], bool front){
	if(front==true)
		str[1]='\0';
	else{
		int len=strlen(str);
		str[0]=str[len-1];
		str[1]='\0';
	}

}