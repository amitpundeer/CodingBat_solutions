/*
	Given three ints, a b c, return true if it is 
	possible to add two of the ints to get the third.
	*/
#include<iostream>
using namespace std;

int main(){
	int a, b, c;
	bool x, twoAsOne(int, int , int);

	cout<<"Enter three numbers : ";
	cin>>a>>b>>c;

	x=twoAsOne(a,b,c);

	cout<<"Result : ";

	if(x==1)
		cout<<"True\n";
	else
		cout<<"False\n";
	
	return 0;
}

bool twoAsOne(int a, int b, int c){
	if(a+b==c)
		return true;
	else if(a+c==b)
		return true;
	else if(b+c==a)
		return true;
	else
		return false;
}