/*
	Given two int values, return whichever value is 
	larger. However if the two values have the same 
	remainder when divided by 5, then the return the 
	smaller value. However, in all cases, if the two 
	values are the same, return 0.
	*/
#include<iostream>
using namespace std;

int main(){
 	int a, b, maxMod5(int, int);

 	cout<<"Enter two values : ";
 	cin>>a>>b;

 	cout<<"Result : "<<maxMod5(a,b)<<endl;

 	return 0;
}

 int maxMod5(int a, int b){
 	if(a==b)
 		return 0;
 	else if(a%5==b%5){
 		return a<b?a:b;
 	}
 
 	return a<b?a:b;	
 }