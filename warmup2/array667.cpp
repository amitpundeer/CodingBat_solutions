/*
    Given an array of ints, return the number of times that two 
    6's are next to each other in the array. Also count instances
    where the second "6" is actually a 7.
    */
    
#include<iostream>

using namespace std;

int main(){
    
    int size, arr[20], *ptr, x, array667(int [], int, int *ptr);
    
    *ptr=0;
    
    cout<<"Enter array size : ";
    cin>>size;
    cout<<endl<<"Enter numbers :\n";
    for(int i=0; i<size; ++i)
        cin>>arr[i];
    
    x=array667(arr,size,ptr);
    
    cout<<endl<<"When second number is also 6 : "<<x<<endl;
    cout<<endl<<"When second number is 7 : "<<*ptr<<endl;
    
    
    return 0;
}

int array667(int arr[], int size, int *ptr){
    
    int x=0;
    
    for(int i=0; i<size-1; ++i)
        if(arr[i]==6)
        {
            if(arr[i+1]==6)
                ++x;
            else if(arr[i+1]==7)
                *ptr=*ptr+1;
        }
    return x;        
}
