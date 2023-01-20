#include<iostream>
using namespace std;

void bubbleSort(int *arr,int size){
    // Base case
    if(size<=1)
        return;
    int i =0 ;
    // processing
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            }
    }
    bubbleSort(arr,size-1);
}

int main(){
    int arr[6]={7,8,3,1,9,2};
    bubbleSort(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}