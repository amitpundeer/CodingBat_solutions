/*
	Given 2 int arrays, each length 2, return a new array 
	length 4 containing all their elements.
	*/
#include<iostream>
using namespace std;

inline void plusTwo(int arr1[], int arr2[], int arr3[]){
	arr3[0]=arr1[0];
	arr3[1]=arr1[1];
	arr3[2]=arr2[0];
	arr3[3]=arr2[1];
}
int main(){
	int arr1[2], arr2[2], arr3[4];

	cout<<"Enter two elements of array 1 : ";
	cin>>arr1[0]>>arr1[1];

	cout<<"Enter two elements of array 2 : ";
	cin>>arr2[0]>>arr2[1];

	plusTwo(arr1,arr2,arr3);

	cout<<"Third array elements : "<<arr3[0]<<" "<<arr3[1];
	cout<<" "<<arr3[2]<<" "<<arr3[3]<<endl;

	return 0;
}