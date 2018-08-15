/*
    Given an array of ints, return the number of 9's in the array.
    */

#include<iostream>

using namespace std;

main(){
    int size, arr[20], arrayCount9(int [], int);
    
    cout<<"Size of array : ";
    cin>>size;
    
    cout<<"\nEnter array elements :\n";
    for(int i=0; i<size; ++i)
        cin>>arr[i];
    
    cout<<endl<<arrayCount9(arr,size)<<endl;
}

int arrayCount9(int arr[], int size){
    int x=0;
    
    for(int i=0; i<size; ++i)
        if(arr[i]==9)
            ++x;
    
    return x;
}