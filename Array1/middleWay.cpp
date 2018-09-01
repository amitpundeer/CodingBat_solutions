/*
	Given 2 int arrays, a and b, each length 3, return a new 
	array length 2 containing their middle elements.
	*/
#include<iostream>
using namespace std;

inline void middleWay(int a[], int b[], int c[]){
	c[0]=a[1];
	c[1]=b[1];
}

int main(){
	int a[3], b[3], c[2];
	
	cout<<"Enter three elements of first array : ";
	for(int i=0; i<3; ++i)
		cin>>a[i];

	cout<<"Enter three elements of seccond array : ";
	for(int i=0; i<3; ++i)
		cin>>b[i];

	middleWay(a,b,c);

	cout<<"New array : ";
	for(int i=0; i<2; ++i)
		cout<<c[i]<<" ";

	return 0;
}