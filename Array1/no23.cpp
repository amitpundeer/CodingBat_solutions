/*
	Given an int array length 2, return true if it does not contain a 2 or 3.
	*/
#include<iostream>
using namespace std;

inline bool no23(int arr[], int size){
	for(int i=0; i<size; ++i)
		if(arr[i]==2||arr[i]==3)
			return false;
		
	return true;
}

int main(){
	int size;
	bool x;

	cout<<"Size : ";
	cin>>size;

	int *arr=new int[size];

	cout<<"Enter array elements : ";
	for(int i=0; i<size; ++i)
		cin>>arr[i];

	x=no23(arr,size);

	if(x==1)
		cout<<"TRUE\n";
	else
		cout<<"FALSE\n";

	return 0;
}