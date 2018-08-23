/*
	The web is built with HTML strings like "<i>Yay</i>" which 
	draws Yay as italic text. In this example, the "i" tag 
	makes <i> and </i> which surround the word "Yay". Given tag 
	and word strings, create the HTML string with tags around 
	the word, e.g. "<i>Yay</i>".
	*/
#include<iostream>
#include<cstring>

using namespace std;
main(){
	char tag[20], word[15], taggedWord[30];
	void makeTags(char [], char [], char []);

	cin.getline(tag,20);
	cin.getline(word,15);

	makeTags(tag,word,taggedWord);

	puts(taggedWord);
}

void makeTags(char tag[], char word[], char taggedWord[]){
	int lenTag=strlen(tag);
	
	lenTag+=2;

	for(int i=lenTag-1; i>0; --i)
		tag[i]=tag[i-1];

	tag[0]='<';
	tag[lenTag-1]='>';
	tag[lenTag]='\0';

	strcpy(taggedWord,tag);
	strcat(taggedWord,word);

	lenTag+=1;

	for(int i=lenTag-1; i>1; --i)
		tag[i]=tag[i-1];

	tag[1]='/';
	tag[lenTag]='\0';

	strcat(taggedWord,tag);
}