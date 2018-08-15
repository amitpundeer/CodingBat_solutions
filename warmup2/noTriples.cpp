/*
    Given an array of ints, we'll say that a triple is a value appearing 3 times
    in a row in the array. Return true if the array does not contain any triples.
    */

#include<iostream>

using namespace std;

main(){
    int size, arr[20];
    bool x, noTriplles(int [], int);
    
    cout<<"Size of array : ";
    cin>>size;
    
    cout<<"\nArray elements :\n";
    for(int i=0; i<size; ++i)
        cin>>arr[i];
    
    x=noTriplles(arr,size);
    
    if(x==1)
        cout<<endl<<"TRUE"<<endl;
    else
        cout<<endl<<"FALSE"<<endl;
}

bool noTriplles(int arr[], int size){
    for(int i=0; i<size; ++i){
        int x=arr[i];
        
        if(arr[i+1]==x)
            if(arr[i+2]==x)
                return false;
    }
    
    return true;
}