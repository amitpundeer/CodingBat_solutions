/*
	Start with 2 int arrays, a and b, of any length. Return 
	how many of the arrays have 1 as their first element.
	*/
#include<iostream>
using namespace std;

inline int start1(int arr1[], int arr2[]){
	int x=0;

	if(arr1[0]==1)
		++x;
	
	if(arr2[0]==1)
		++x;

	return x;
}
int main(){
	int size1, size2, x;

	cout<<"Enter size of first and second array : ";
	cin>>size1>>size2;

	int *arr1=new int[size1];
	int *arr2=new int[size2];

	cout<<"Enter elements of first array : ";
	for(int i=0; i<size1; ++i)
		cin>>arr1[i];

	cout<<"Enter elements of second array : ";
	for(int i=0; i<size2; ++i)
		cin>>arr2[i];

	x=start1(arr1,arr2);

	cout<<"Number of 1's as their first element : "<<x<<endl;

	return 0;
}