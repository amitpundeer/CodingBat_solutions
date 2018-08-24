/*
	Given two strings, a and b, return the result of putting them 
	together in the order abba, e.g. "Hi" and "Bye" returns "HiByeByeHi".
	*/
#include<iostream>
#include<cstring>

using namespace std;
main(){
	char str1[40], str2[15];
	void makeAbba(char [], char []);

	cin.getline(str1,40);
	cin.getline(str2,15);

	makeAbba(str1,str2);

	puts(str1);
}

void makeAbba(char str1[], char str2[]){
	char copystr[15];

	strcpy(copystr,str1);

	strcat(str1,str2);
	strcat(str1,str2);
	strcat(str1,copystr);
}