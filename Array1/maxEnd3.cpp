/*
	Given an array of ints length 3, figure out which is larger, 
	the first or last element in the array, and set all the other 
	elements to be that value. Return the changed array.
	*/
#include<iostream>
using namespace std;

inline void maxEnd3(int arr[3]){
	if(arr[0]>=arr[2])
		arr[1]=arr[2]=arr[0];
	else if(arr[2]>=arr[0])
		arr[0]=arr[1]=arr[2];
}

int main(){
	int arr[3];

	cout<<"Enter three elements : ";
	cin>>arr[0]>>arr[1]>>arr[2];

	maxEnd3(arr);

	cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<"\n";

	return 0;
}