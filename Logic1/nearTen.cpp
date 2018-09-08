/*
	Given a non-negative number "num", return true 
	if num is within 2 of a multiple of 10.
	*/
#include<iostream>
using namespace std;

int main(){
	int num;
	bool  nearTen(int);

	lb: cout<<"Enter a non-negative number : ";
	cin>>num;

	bool x=nearTen(num);

	if(num>=0){
		if(x==1)
			cout<<"TRUE\n";
		else
			cout<<"FALSE\n";
	}
	else
		goto lb;

	return 0;
}

bool nearTen(int num){
	if(num%10==0)
		cout<<num<<" is a multiple of 10 !!!\n";
	else{
		if(num%10==8||num%10==9)
			return true;
		else
			return false;
	}
}