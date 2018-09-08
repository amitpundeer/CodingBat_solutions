/*
	Given an array of ints, swap the first and last elements in 
	the array. Return the modified array. The array length 
	will be at least 1.
	*/
#include<iostream>
using namespace std;

inline void swapEnds(int arr[], int size){
	arr[0]=arr[0]+arr[size-1];
	arr[size-1]=arr[0]-arr[size-1];
	arr[0]=arr[0]-arr[size-1];
}

int main(){
	int size;

	cout<<"Enter size of array : ";
	cin>>size;

	int arr[size];

	cout<<"Enter array elements : ";
	for(int i=0; i<size; ++i)
		cin>>arr[i];

	swapEnds(arr,size);

	cout<<"Swappwd array : ";
	for(int i=0; i<size; ++i)
		cout<<arr[i]<<" ";

	cout<<endl;

	return 0;
}