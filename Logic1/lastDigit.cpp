/*
	Given three ints, a b c, return true if two or more 
	of them have the same rightmost digit. The ints are non-negative. 
	*/
#include<iostream>
using namespace std;

int main(){
	int a, b, c;
	bool x, lastDigit(int, int, int);

	cout<<"Enter three non-negative integers : ";
	cin>>a>>b>>c;

	x=lastDigit(a,b,c);

	cout<<"Result : ";
	if(x==1)
		cout<<"True\n";
	else
		cout<<"False\n";

	return 0;
}

bool lastDigit(int a, int b, int c){
	if(a%10==b%10||a%10==c%10||a%10==b||a%10==c)
		return true;
	else if(b%10==a%10||b%10==c%10||b%10==a||b%10==c)
		return true;
	else if(c%10==a%10||c%10==b%10||c%10==a||c%10==b)
		return true;
	else
		return false;
}