/*
	Given an array of ints length 3, return a new array with 
	the elements in reverse order, so {1, 2, 3} becomes {3, 2, 1}.
	*/
#include<iostream>

using namespace std;

inline void reverse3(int arr[]){
	arr[0]=arr[0]+arr[2];
	arr[2]=arr[0]-arr[2];
	arr[0]=arr[0]-arr[2];
}
int main(){
	int arr[3];

	cout<<"Enter three elements : ";
	cin>>arr[0]>>arr[1]>>arr[2];

	reverse3(arr);

	cout<<"Reversed array is : "<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;

	return 0;
}