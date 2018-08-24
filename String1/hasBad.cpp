/*
	Given a string, return true if "bad" appears starting at index
	0 or 1 in the string, such as with "badxxx" or "xbadxx" 
	but not "xxbadxx".
	*/
#include<iostream>
#include<cstring>

using namespace std;
main(){
	char str[15];
	bool x, hasBad(char []);

	cin.getline(str,15);

	x=hasBad(str);

	if(x==1)
		cout<<"TRUE\n";
	else
		cout<<"FALSE\n";
}

bool hasBad(char str[]){
	if(str[0]=='b'||str[0]=='B'){
		if(str[1]=='a')
			if(str[2]=='d')
				return true;
	}
	else if(str[1]=='b'){
		if(str[2]=='a')
			if(str[3]=='d')
				return true;
	}

	return false;
}