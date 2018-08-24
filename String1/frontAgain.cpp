/*
	Given a string, return true if the first 2 chars in the 
	string also appear at the end of the string, such as 
	with "edited".
	*/
#include<iostream>
#include<cstring>

using namespace std;
main(){
	char str[15];
	bool x, without2(char []);

	cin.getline(str,15);

	x=without2(str);

	if(x==1)
		cout<<"TRUE\n";
	else
		cout<<"FALSE\n";
}

bool without2(char str[]){
	int len=strlen(str);

	if(len>2){
		if( (str[0]==str[len-2])&&(str[1]==str[len-1]) )
			return true;
		else
			return false;
	}

	return true;
}