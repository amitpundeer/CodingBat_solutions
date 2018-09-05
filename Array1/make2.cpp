/*
	Given 2 int arrays, a and b, return a new array length 2 
	containing, as much as will fit, the elements from a 
	followed by the elements from b. The arrays may be any 
	length, including 0, but there will be 2 or more elements 
	available between the 2 arrays.
	*/
#include<iostream>
using namespace std;

void make2(int size1, int arr1[], int size2, int arr2[], int arr3[2]){
	if(size1==0){
		arr3[0]=arr2[0];
		arr3[1]=arr2[1];
	}
	else if(size1==1){
		arr3[0]=arr1[0];
		arr3[1]=arr2[0];
	}
	else{
		arr3[0]=arr1[0];
		arr3[1]=arr1[1];
	}
}

int main(){
	int size1, size2;
	void make2(int, int[], int, int[], int[]);
	cout<<"Enter size of array 1 : ";
	cin>>size1;

	if(size1==0){
		cout<<"Now size of array 2 should be atleast 2.\nEnter size of second array : ";
		cin>>size2;

		lb:if(size2<2){
			cout<<"Enter size again : ";
			cin>>size2;

			if(size2<2)
				goto lb;
		}

	}
	else if(size1==1){
		cout<<"Now size of array 2 should be atleast 1.\nEnter size of second array : ";
		cin>>size2;

		nb:if(size2<1){
			cout<<"Enter size again : ";
			cin>>size2;

			if(size2<1)
				goto nb;
		}
	}
	else{
		cout<<"Enter size of second array : ";
		cin>>size2;
	}

	int *arr1=new int[size1];
	int *arr2=new int[size2];
	int arr3[2];

	cout<<"Enter first array elements : ";
	for(int i=0; i<size1; ++i)
		cin>>arr1[i];

	cout<<"Enter second array elements : ";
	for(int i=0; i<size2; ++i)
		cin>>arr2[i];

	make2(size1,arr1,size2,arr2,arr3);

	cout<<"Third array elements are : "<<arr3[0]<<" "<<arr3[1]<<endl;

	return 0;
}