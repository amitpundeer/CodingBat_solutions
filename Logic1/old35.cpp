/*
	Return true if the given non-negative number is a multiple of 3 or 5, but not both.
	*/
#include<iostream>
using namespace std;

inline bool old35(int n){
	if(n%3==0&&n%5==0)
		return false;
	else if(n%3==0||n%5==0)
		return true;
	else
		return false;
}

int main(){
	int n;

	lb:cin>>n;

	if(n<0){
		cout<<"Enter non-negative number only !!!\n";
		goto lb;
	}

	bool x=old35(n);

	if(x==1)
		cout<<"TRUE\n";
	else
		cout<<"FALSE\n";

	return 0;
}