/*
	Given an int array length 2, return true if it contains a 2 or a 3.
	*/
#include<iostream>
using namespace std;

inline bool has23(int arr[], int size){
	for(int i=0; i<size; ++i)
		if(arr[i]==2||arr[i]==3)
			return true;

	return false;
}

int main(){
	int size;

	cout<<"Enter size : ";
	cin>>size;

	int *arr=new int[size];

	cout<<"Enter array elements : ";
	for(int i=0; i<size; ++i)
		cin>>arr[i];

	bool x=has23(arr,size);

	if(x==1)
		cout<<"TRUE\n";
	else
		cout<<"FALSE\n";

	return 0;
}