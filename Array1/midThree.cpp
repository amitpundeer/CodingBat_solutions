/*
	Given an array of ints of odd length, return a new array 
	length 3 containing the elements from the middle of the 
	array. The array length will be at least 3.
	*/
#include<iostream>
using namespace std;

inline void midThree(int arr1[], int arr2[], int size){
	arr2[0]=arr1[size/2-1];
	arr2[1]=arr1[size/2];
	arr2[2]=arr1[size/2+1];
}

int main(){
	int size, arr2[3];

	cout<<"Enter size : ";
	cin>>size;

	if(size%2==0){
		cout<<"Enter odd size only !!!\n";
		return 0;
	}

	int *arr1=new int[size];

	cout<<"Enter array elements : ";
	for(int i=0; i<size; ++i)
		cin>>arr1[i];

	if(size<=3)
		for(int i=0; i<size; ++i)
			cout<<arr1[i]<<" ";
	else{
		midThree(arr1,arr2,size);

		cout<<"The new array should be : "<<arr2[0]<<" "<<arr2[1]<<" "<<arr2[2]<<"\n";
		}
	
	return 0;
}