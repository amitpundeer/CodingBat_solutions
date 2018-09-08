/*
	Given an int array, return true if the array contains 2 
	twice, or 3 twice. The array will be length 0, 1, or 2
	*/
#include<iostream>
using namespace std;

inline bool double23(int arr[], int size){
	if(size==2){
		if(arr[0]==arr[1]==2)
			return true;
		else if(arr[0]==arr[1]==3)
			return true;
		else
			return false;
	}
	else
		return false;
}

int main(){
	int size;

	cout<<"Enter size<=2 : ";
	cin>>size;

	lb:if(size<=2&&size>0){

		int arr[size];

		cout<<"Enter elements : ";
		for(int i=0; i<size; ++i)
			cin>>arr[i];

		bool x=double23(arr,size);

		if(x==1)
			cout<<"TRUE\n";
		else
			cout<<"FALSE\n";
	}
	else{
		cout<<"Enter in given range only !!!\n";
		cout<<"Enter again : ";
		cin>>size;

		goto lb;
	}

	return 0;
}