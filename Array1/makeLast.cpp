/*
	Given an int array, return a new array with double the
	length where its last element is the same as the original
	array, and all the other elements are 0.
	The original array will be length 1 or more.
	*/
#include<iostream>
using namespace std;

inline void makeLast(int arr[], int &size){
	int x=arr[size -1];

	size*=2;

	for(int i=0; i<size-1; ++i)
		arr[i]=0;

	arr[size-1]=x;
}

int main(){
	int size;

	cout<<"Enter size : ";
	cin>>size;

	int *arr=new int[size];

	cout<<"Enter array elements : ";
	for(int i=0; i<size; ++i)
		cin>>arr[i];

	makeLast(arr,size);

	cout<<"Array now is : ";
	for(int i=0; i<size; ++i)
		cout<<arr[i]<<" ";

	cout<<endl;

	return 0;
}