/*
    Given an array of ints, return true if it contains a 2, 7, 1 pattern:
    a value, followed by the value plus 5, followed by the value minus 1.
    Additionally the 271 counts even if the "1" differs by 2 or less 
    from the correct value.
    */
#include<iostream>

using namespace std;

main(){
    int size, arr[20];
    bool x, has271(int [], int);
    
    cout<<"Enter array size : ";
    cin>>size;
    cout<<"\nEnter array elements :\n";
    for(int i=0; i<size; ++i)
        cin>>arr[i];
    
    if(size>=3){
        x=has271(arr,size);
        
        if(x==1)
            cout<<endl<<"TRUE"<<endl;
        else
            cout<<endl<<"FALSE"<<endl;
    }
    else
        cout<<endl<<"FALSE"<<endl;
}

bool has271(int arr[], int size){
    int i;
    
    for(i=0; i<size-2; ++i){
        if(arr[i]==2)
            if(arr[i+1]==7)
                if(arr[i+2]==1)
                    return true;
    }
    
    for(i=0; i<size-2; ++i){
        int val=arr[i];
        
        if( (arr[i+1]==(val+5))&&((arr[i+2]-(val-1))<=2) )
            return true;
    }
    
    return false;
}