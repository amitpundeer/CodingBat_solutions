/*
	Given 2 arrays of ints, a and b, return true if they have 
	the same first element or they have the same last element. 
	Both arrays will be length 1 or more.
	*/
#include<iostream>

using namespace std;

inline bool commonEnd(int sz1, int arr1[], int sz2, int arr2[]){
	if(arr1[0]==arr2[0])
		return true;
	else if(arr1[sz1-1]==arr2[sz2-1])
		return true;
	else return false;
}
int main(){
	int sz1, sz2;
	bool x;

	cout<<"Enter size of first and second array resp. : ";
	cin>>sz1>>sz2;

	if(sz1<=0||sz2<=0)
		return 0;
	else{
	int *arr1=new int[sz1];
	int *arr2=new int[sz2];

	cout<<"Enter first array elements : ";
	for(int i=0; i<sz1; ++i)
		cin>>arr1[i];

	cout<<"Enter second array elements : ";
	for(int i=0; i<sz2; ++i)
		cin>>arr2[i];

	x=commonEnd(sz1,arr1,sz2,arr2);

	if(x==1)
		cout<<"TRUE\n";
	else
		cout<<"FALSE\n";

	return 0;
	}
}