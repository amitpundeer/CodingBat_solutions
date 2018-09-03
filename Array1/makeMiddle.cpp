/*
	Given an array of ints of even length, return a new array 
	length 2 containing the middle two elements from the 
	original array. The original array will be length 2 or more.
	*/
#include<iostream>
using namespace std;

inline void makeMiddle(int arr1[], int arr2[], int size){
	
	arr2[0]=arr1[size/2-1];
	arr2[1]=arr1[size/2];
}

int main(){
	int size;

	cout<<"Enter size of array : ";
	cin>>size;

	if(size%2!=0){
		cout<<"Size should be even !!!\n";
		return 0;
	}

	int *arr1=new int[size];
	int *arr2=new int[2];

	cout<<"Enter elements of array : ";
	for(int i=0; i<size; ++i)
		cin>>arr1[i];

	if(size<=2)
		for(int i=0; i<size; ++i)
			cout<<arr1[i]<<" ";
	else{
		makeMiddle(arr1,arr2,size);

		cout<<"The new array would be : "<<arr2[0]<<" "<<arr2[1]<<"\n";

	}

	return 0;
}