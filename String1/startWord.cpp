/*
	Given a string and a second "word" string, we'll say that the 
	word matches the string if it appears at the front of the 
	string, except its first char does not need to match exactly. 
	On a match, return the front of the string, or otherwise 
	return the empty string. So, so with the string "hippo" the 
	word "hi" returns "hi" and "xip" returns "hip". The word 
	will be at least length 1.
	*/
#include<iostream>
#include<cstring>

using namespace std;
main(){
	char str[15], word[15];
	void startWord(char [], char []);

	cin.getline(str,15);
	cin.getline(word,15);

	startWord(str,word);
}

void startWord(char str[], char word[]){
	int len=strlen(str), lenW=strlen(word), i, flag=-1;

	if(lenW==1){
		str[1]='\0';
		puts(str);
	}
	else if(lenW<=len){
		for(i=1; i<lenW; ++i)
			if(word[i]!=str[i]){
				flag=1;
				break;
			}
				
		if(flag==-1){
			for(i=0; i<lenW; ++i)
				cout<<str[i];
		}
		else{
		str[0]='\0';
		puts(str);
		}
	}
}