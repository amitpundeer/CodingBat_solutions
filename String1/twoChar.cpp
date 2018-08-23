/*
	Given a string and an index, return a string length 2 starting
	at the given index. If the index is too big or too small to 
	define a string length 2, use the first 2 chars. The string 
	length will be at least 2.
	*/
#include<iostream>
#include<cstring>

using namespace std;
main(){
	char str[10];
	int index;
	void twoChar(char [], int);

	cin.getline(str,10);
	cin>>index;

	twoChar(str,index);

	puts(str);
}

void twoChar(char str[], int index){
	int len=strlen(str);

	if(index>=0&&index<=len-2){
		if(len>2){
			str[0]=str[index];
			str[1]=str[index+1];
			str[2]='\0';
		}
	}
	else{
		if(len==1)
			str[1]='\0';
		else if(len==2)
			str[2]='\0';
		else
			str[2]='\0';
	}
}