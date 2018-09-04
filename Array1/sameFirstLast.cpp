/*
	Given an array of ints, return true if the array is length 1
	 or more, and the first element and the last element are equal.
	 */
#include<iostream>
using namespace std;

inline bool sameFirstLast(int arr[], int size){
	if(arr[0]==arr[size-1])
		return true;
	else
		return false;
}

int main(){
	int size;
	bool x;

	cout<<"Enter size of array : ";
	cin>>size;

	lb:if(size<2){
		cout<<"Size should be atleast 2 !!!";

		cout<<"\nEnter size again : ";
		cin>>size;

		if(size<2)
			goto lb;
	}

	int *arr=new int[size];

	cout<<"Enter elements : ";
	for(int i=0; i<size; ++i)
		cin>>arr[i];

	x=sameFirstLast(arr,size);

	if(x==1)
		cout<<"TRUE\n";
	else
		cout<<"FALSE\n";

	return 0;
}