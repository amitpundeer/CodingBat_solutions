/*
	Given an array of ints, return true if 6 appears as 
	either the first or last element in the array. The array 
	will be length 1 or more.
	*/
#include<iostream>

using namespace std;

inline bool firstLast6(int size, int arr[]){
	if(arr[0]==6||arr[size-1]==6)
		return true;
	else
		return false;
}

int main(){
	int size;
	bool x;

	cout<<"Enter array size : ";
	cin>>size;

	int *arr=new int[size];

	cout<<"Enter array elements : ";
	for(int i=0; i<size ; ++i)
		cin>>arr[i];

	x=firstLast6(size,arr);

	if(x==1)
		cout<<"TRUE\n";
	else
		cout<<"FALSE\n";

	return 0;
}