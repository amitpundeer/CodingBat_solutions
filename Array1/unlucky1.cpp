/*
	We'll say that a 1 immediately followed by a 3 in an array 
	is an "unlucky" 1. Return true if the given array contains 
	an unlucky 1 in the first 2 or last 2 positions in the array.
	*/
#include<iostream>
using namespace std;

inline bool unlucky1(int arr[], int size){

	if(arr[0]==1){
		if(arr[1]==3)
			return true;
	}
	else if(arr[1]==1){
		if(arr[2]==3)
			return true;
	}
	
	if(arr[size-3]==1){
		if(arr[size-2]==3)
			return true;
	}
	else if(arr[size-2]==1){
		if(arr[size-1]==3)
			return true;
	}
	
	return false;
}

int main(){
	int size;
	bool x;

	cout<<"Enter size of array : ";
	cin>>size;

	int *arr=new int[size];

	cout<<"Enter array elements : ";
	for(int i=0; i<size; ++i)
		cin>>arr[i];

	x=unlucky1(arr,size);

	if(x==1)
		cout<<"TURE\n";
	else
		cout<<"FALSE\n";

	return 0;
}