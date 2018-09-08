/*
	Given an int array of any length, return a new array of 
	its first 2 elements. If the array is smaller than 
	length 2, use whatever elements are present.
	*/
#include<iostream>
using namespace std;

int main(){
	int size;
	
	cout<<"Enter size : ";
	cin>>size;

	int *arr=new int[size];

	cout<<"Enter array elements : ";
	for(int i=0; i<size; ++i)
		cin>>arr[i];

	int *ptr;

	cout<<"Array now is : ";

	if(size>=2){
		ptr[0]=arr[0];
		ptr[1]=arr[1];

		delete [] arr;

		cout<<ptr[0]<<" "<<ptr[1]<<endl;
	}
	else if(size==1){
		ptr[0]=arr[0];

		delete [] arr;

		cout<<ptr[0]<<endl;
	}
	
	return 0;
}