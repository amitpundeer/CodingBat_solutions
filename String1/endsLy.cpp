/*
	Given a string, return true if it ends in "ly".
	*/

#include<iostream>
#include<string.h>
using namespace std;

main(){
	char str[10];
	bool x, endsLy(char []);

	cin.getline(str,10);

	x=endsLy(str);

	if(x==1)
		cout<<"TRUE\n";
	else
		cout<<"FALSE\n";
}

bool endsLy(char str[]){
	int len=strlen(str);

	if(str[len-2]=='l')
		if(str[len-1]=='y')
			return true;

	return false;
}