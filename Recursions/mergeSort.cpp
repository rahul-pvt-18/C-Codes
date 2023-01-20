#include<iostream>
using namespace std;

void merge(int *arr,int s,int e){
    int mid = (s+e)/2;
    // Find the lenth of the Arrays
    int len1 = mid-s+1;
    int len2 = e-mid;
    // Create new Arrays of sizes of 2 arrays  
    int *first = new int[len1];
    int *second = new int[len2];

    // copying values in the Arrays 
    int mainArrayIndex=s;
    
    for(int i =0;i<len1;i++)
        first[i]=arr[mainArrayIndex++];
    mainArrayIndex=mid+1;
    for(int j =0;j<len2;j++)
        second[j]=arr[mainArrayIndex++];
    
    // Merge 2 Sorted Arrays 
    mainArrayIndex=s;
    int i=0,j=0;
    while(i<len1 && j<len2){
        if(first[i]<second[j])
            arr[mainArrayIndex++]=first[i++];
        else
            arr[mainArrayIndex++]=second[j++];
    }
    while(i<len1){
        arr[mainArrayIndex++]=first[i++];
    }
    while(j<len2){
        arr[mainArrayIndex++]=second[j++];
    }
    
}

void mergeSort(int *arr,int s,int e) {
    int mid = (s+e)/2;

    // Base case 
    if(s>=e)
        return;
    // Left part merge sort krdo  
    mergeSort(arr,s,mid);
    // right part merge Sort krdo 
    mergeSort(arr,mid+1,e);

    // arrays ko merge krdo 
    merge(arr,s,e);
}

int main(){
    int arr[7]={8,3,5,9,1,2,6};
    mergeSort(arr,0,6);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}