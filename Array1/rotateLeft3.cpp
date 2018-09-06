/*
	Given an array of ints length 3, return an array with the 
	elements "rotated left" so {1, 2, 3} yields {2, 3, 1}.
	*/
#include<iostream>
using namespace std;

inline void rotateLeft3(int arr[]){
	int x=arr[0];

	arr[0]=arr[1];
	arr[1]=arr[2];
	arr[2]=x;
}
int main(){
	int arr[3];

	cout<<"Enter three elements : ";
	cin>>arr[0]>>arr[1]>>arr[2];

	rotateLeft3(arr);

	cout<<"Rotated array is : ";
	cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;

	return 0;
}