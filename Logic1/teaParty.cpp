/*
	We are having a party with amounts of tea and candy. 
	Return the int outcome of the party encoded as 
	0=bad, 1=good, or 2=great. A party is good (1) if both 
	tea and candy are at least 5. However, if either tea 
	or candy is at least double the amount of the other one, 
	the party is great (2). However, in all cases, if either tea 
	or candy is less than 5, the party is always bad (0).
	*/
#include<iostream>
using namespace std;

int main(){
	int tea, candy, teaParty(int, int);

	cout<<"Amount of tea : ";
	cin>>tea;

	cout<<"Amount of candy : ";
	cin>>candy;

	cout<<"Party was : "<<teaParty(tea,candy)<<endl;

	return 0;
}

int teaParty(int t, int c){
	if(t<5&&c<5)
		return 0;
	else if(t>=2*c||c>=2*t)
		return 2;
	else
		return 1;
}