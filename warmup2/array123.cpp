/*
    Given an array of ints, return true if the sequence of numbers
    1, 2, 3 appears in the array somewhere.
    */

#include<iostream>

using namespace std;

main(){
    int size, arr[20];
    bool x, array123(int [], int);
    
    cout<<"Size of array : ";
    cin>>size;
    
    cout<<"\nArray elements :\n";
    for(int i=0; i<size; ++i)
        cin>>arr[i];
    
    x=array123(arr,size);
    
    if(x==1)
        cout<<endl<<"TRUE"<<endl;
    else
        cout<<endl<<"FALSE"<<endl;
}

bool array123(int arr[], int size){
    for(int i=0; i<size; ++i)
        if(arr[i]==1)
            if(arr[i+1]==2)
                if(arr[i+2]==3)
                    return true;
    
    return false;
}