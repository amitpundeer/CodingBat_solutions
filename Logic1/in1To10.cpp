/*
	Given a number n, return true if n is in the range
	1..10, inclusive. Unless outsideMode is true, 
	in which case return true if the number is 
	less or equal to 1, or greater or equal to 10.
	*/
#include<iostream>
using namespace std;

int main(){
	int n;
	bool x, outsideMode, in1To10(int, bool);

	cin>>n;
	cin>>outsideMode;

	x=in1To10(n,outsideMode);

	if(x==1)
		cout<<"TRUE\n";
	else
		cout<<"FALSE\n";

	return 0;
}

bool in1To10(int n, bool outsideMode){
	if(outsideMode==true){
		if(n<=1||n>=10)
			return true;
		else
			return false;
	}
	else{
		if(n>=1&&n<=10)
			return true;
	}
}