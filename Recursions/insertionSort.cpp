#include<iostream>
using namespace std;
void insertionSort(int *arr,int size){
    for(int i=1;i<size;i++){
        int temp=arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(arr[j]>temp){
                // shift
                arr[j+1]=arr[j];
            }
            else 
                break;
        }
        arr[j+1]=temp;
    }
}
void insertionSortAlgo(int *arr,int size){
    // Base case 
    if(size<=1)     // 1 size ka array tro phle hi sort hota hai 
        return;
    // recursive call (head recursion)

    insertionSortAlgo(arr,size-1);      // Sort kardo phle ek element kam wale array ko 
    
    // processing 
    int last = arr[size-1];
    int j = size-2;
    while(j>=0 && arr[j]>last){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=last;
}
int main(){
    int arr[7]={8,3,5,9,1,2,6};
    insertionSort(arr,7);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}