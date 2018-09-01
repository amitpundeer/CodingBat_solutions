/*
	Given an int array length 3, if there is a 2 in the array 
	immediately followed by a 3, set the 3 element to 0. Return the changed array.
	*/
#include<iostream>
using namespace std;

inline void fix23(int arr[]){
	for(int i=0; i<2; ++i)
		if(arr[i]==2)
			if(arr[i+1]==3)
				arr[i+1]=0;
}

int main(){
	int arr[3];

	cout<<"Enter three elements : ";
	for (int i=0; i<3; ++i)
		cin>>arr[i];

	fix23(arr);

	cout<<"changed array : ";
	for(int i=0; i<3; ++i)
		cout<<arr[i]<<" ";

	return 0;
}