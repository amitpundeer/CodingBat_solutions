/*
	Given an array of ints, return a new array length 2 
	containing the first and last elements from the original 
	array. The original array will be length 1 or more.
	*/
#include<iostream>
using namespace std;

inline void makeEnds(int arr[], int &size){
	arr[1]=arr[size-1];

	size=2;
}

int main(){
	int size;

	cout<<"Enter size : ";
	cin>>size;

	int *arr=new int[size];

	cout<<"Enter array elements : ";
	if(size==1){
		cin>>arr[0];

		cout<<arr[0]<<"\n";
	}
	else if(size==2){
		cin>>arr[0]>>arr[1];

		cout<<arr[0]<<" "<<arr[1]<<"\n";
	}
	else{
		for(int i=0; i<size; ++i)
			cin>>arr[i];

		makeEnds(arr,size);

		for(int i=0; i<size; ++i)
			cout<<arr[i]<<" ";

		cout<<endl;
	}

	return 0;
}