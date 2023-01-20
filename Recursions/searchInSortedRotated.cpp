#include<iostream>
using namespace std;

int pivot(int *arr,int s,int e){
    int mid = (s+e)/2;
    // Base case 
    if(s>=e)
        return e;
    // Recursive calls
    if(arr[mid]>arr[0]) // right side search 
        pivot(arr,mid+1,e);
    else                // left side search  
    {
        pivot(arr,s,mid);
    }
}
int binarySearch(int*arr,int s,int e,int target){
    int mid = (s+e)/2;
    // Base case 
    if(s>e)
        return -1;
    // Processing
    if(arr[mid]==target)
        return mid;
    // recursive calls
    else if(arr[mid]<target)
        return binarySearch(arr,mid+1,e,target);
    else
        return binarySearch(arr,s,mid-1,target); 

}
int searchElement(int *arr,int size,int target){
    
    int pivotIndex=pivot(arr,0,size-1);
    if(target>arr[pivotIndex] && target<=arr[size-1])
        binarySearch(arr,pivotIndex,size-1,target);
    else if(target>arr[pivotIndex] && target>=arr[0])
        binarySearch(arr,02,pivotIndex,target);
}

int main(){
    int arr[5]={7,9,1,2,3};
    int key = 2;
    cout<<"Element found at index : "<<searchElement(arr,5,key)<<endl;
}