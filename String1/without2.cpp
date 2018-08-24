/*
	Given a string, if a length 2 substring appears at both its 
	beginning and end, return a string without the substring at 
	the beginning, so "HelloHe" yields "lloHe". The substring 
	may overlap with itself, so "Hi" yields "". Otherwise, 
	return the original string unchanged.
	*/
#include<iostream>
#include<cstring>

using namespace std;
main(){
	char str[15];
	void without2(char []);

	cin.getline(str,15);

	without2(str);

	puts(str);
}

void without2(char str[]){
	int len=strlen(str);

	if(len>3){
		if( (str[0]==str[len-2])&&(str[1]==str[len-1]) )
			for(int i=0; i<len-1; ++i)
				str[i]=str[i+2];
	}
}