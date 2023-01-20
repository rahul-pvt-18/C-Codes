// Check the array is sorted or not by Recursions
#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){
    // Base case 
    if(size<=1)
        return true;
    if(arr[0]>arr[1])
        return false;
    // Recursive relation
    else 
        return isSorted(arr+1,size-1);
}

int main(){
    
    int arr[6]={2,4,6,9,11,13};
    cout<<" Checking that the array is sorted...."<<endl;
    if(isSorted(arr,6))
        cout<<"The Array is Sorted my veere!! "<<endl;
    else
        cout<<"The Array is not sorted!!"<<endl;
}