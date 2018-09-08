/*
	Start with 2 int arrays, a and b, each length 2. Consider 
	the sum of the values in each array. Return the array which 
	has the largest sum. In event of a tie, return a.
	*/
#include<iostream>
using namespace std;

int main()
{
	int a[2], b[2];
	int* biggerTwo(int [], int []);

	cout<<"Enter two elements of first array : ";
	cin>>a[0]>>a[1];

	cout<<"Enter two elements of second array : ";
	cin>>b[0]>>b[1];

	int *arr=biggerTwo(a,b);

	cout<<"Returrned array : ";
	cout<<arr[0]<<" "<<arr[1]<<endl;

	return 0;
}

int* biggerTwo(int a[], int b[]){
	int x=a[0]+a[1];
	int y=b[0]+b[1];

	if(x>=y)
		return a;
	else
		return b;
}