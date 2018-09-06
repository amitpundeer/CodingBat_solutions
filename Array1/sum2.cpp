/*
	Given an array of ints, return the sum of the first 2 
	elements in the array. If the array length is less than 2, 
	just sum up the elements that exist, returning 0 if the array is length 0.
	*/
#include<iostream>
using namespace std;

inline int sum2(int arr[]){
	return (arr[0]+arr[1]);
}

int main(){
	int size;

	cout<<"Enter size of array : ";
	cin>>size;

	int *arr=new int[size];

	cout<<"Enter array elements : ";
	for(int i=0; i<size; ++i)
		cin>>arr[i];

	if(size>=2)
		cout<<"Sum : "<<sum2(arr)<<endl;
	else 
		cout<<"Sum : "<<arr[0]<<endl;
	
	return 0;
}