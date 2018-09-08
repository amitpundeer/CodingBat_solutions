/*
	Given 2 int arrays, a and b, of any length, return a new 
	array with the first element of each array. If either 
	array is length 0, ignore that array.
	*/
#include<iostream>
using namespace std;

int main(){
	int sz1, sz2;

	cout<<"Enter size 1 : ";
	cin>>sz1;
	cout<<"Enter size 2 : ";
	cin>>sz2;

	int *a=new int[sz1];
	int *b=new int[sz2];

	cout<<"Enter array 1 elements : ";
	for(int i=0; i<sz1; ++i)
		cin>>a[i];

	cout<<"Enter array 2 elements : ";
	for(int i=0; i<sz2; ++i)
		cin>>b[i];

	int *arr;

	arr[0]=a[0];
	arr[1]=b[0];

	cout<<"Front11 : ";
	cout<<arr[0]<<" "<<arr[1]<<endl;

	delete [] a;
	delete [] b;

	return 0;
}