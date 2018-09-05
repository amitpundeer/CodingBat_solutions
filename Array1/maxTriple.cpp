/*
	Given an array of ints of odd length, look at the first, 
	last, and middle values in the array and return 
	the largest. The array length will be a least 1.
	*/
#include<iostream>
using namespace std;

inline int maxTriple(int arr[], int size){
	int max=arr[0];

	if(arr[size/2]>=max)
		max=arr[size/2];

	if(arr[size-1]>=max)
		max=arr[size-1];

	return max;
}

int main(){
	int size;

	cout<<"Enter size of array : ";
	cin>>size;

	lb:if(size%2==0){
		cout<<"Size must be odd !!!";

		cout<<"\nEnter again : ";
		cin>>size;

		//if(size%2==0)
		goto lb;
	}

	int *arr=new int[size];

	cout<<"Enter elements of array : ";
	for(int i=0; i<size; ++i)
		cin>>arr[i];

	cout<<"Max element is : "<<maxTriple(arr,size)<<endl;

	return 0;
}