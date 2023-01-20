#include<iostream>
using namespace std;

int peakElement(int *arr,int s,int e){
    int mid = (s+e)/2;
    // Base case 
    if(s>=e)
        return e;
    // Recurursive calls 
    if(arr[mid]<arr[mid+1]) // Go to left side
        return peakElement(arr,mid+1,e);
    if(arr[mid]>arr[mid+1]) // Go to rigth side
        return peakElement(arr,s,mid);

}

int main(){
    int arr[7]={8,9,17,12,10,6,2};
    cout<<"Peak element  : "<<arr[peakElement(arr,0,6)]<<endl;
}