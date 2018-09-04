/*
	Given an array of ints length 3, return the sum of all the elements.
	*/
#include<iostream>
using namespace std;

inline int sum3(int arr[]){
	return (arr[0]+arr[1]+arr[2]);
}

int main(){
	int arr[3];

	cout<<"Enter three elements : ";
	for(int i=0; i<3; ++i)
		cin>>arr[i];

	cout<<"Sum : "<<sum3(arr)<<"\n";

	return 0;
}