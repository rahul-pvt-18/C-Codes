#include<iostream>
using namespace std;

int partition(int *arr,int s,int e){
    // pivot nikaalna h
    int pivot =  arr[s];
    int count = 0;
    for(int i=s+1;i<=e;i++)
        if(arr[i]<=pivot)
            count++;
    int pivotIndex = s+count;
    // Pivot ko Correct position p phoucha denge 
    swap(arr[s],arr[pivotIndex]);

    // left aur right portion ko arrange krdenge 
    int i = s, j = e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot)
            i++;
        while(arr[j]>=pivot)
            j--;
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j++]);
        }
    }
    return pivotIndex;
}

void quickSort(int *arr,int s,int e){
    // Base Case 
    if(s>=e)
        return;
    
    int p =partition(arr,s,e);

    // left part Sort 
    quickSort(arr,s,p-1);
    // right part Sort 
    quickSort(arr,p+1,e);
}

int main(){
    int arr[7]={8,3,5,9,1,2,6};
    quickSort(arr,0,6);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}