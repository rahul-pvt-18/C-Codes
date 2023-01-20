#include<iostream>
using namespace std;
void selectionSort(int *arr,int size){
    for(int i=0;i<size-1;i++){
        int minIndex=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minIndex])
                minIndex=j;
        }
        swap(arr[minIndex],arr[i]);
    }
    
}
void selectionSortAlgo(int *arr,int size){
    // Base Case
    if(size<=1)
        return;
    // Processing
    int i=0;
    int minIndex=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minIndex])
                minIndex=j;
       }
    swap(arr[minIndex],arr[i]);

    // recursive call
    return selectionSortAlgo(arr+1,size-1);

}
void selectionSortAlgo2(int *arr,int size){
    // Base case 
    if(size<=1)
        return;
    // RC 
    // sort krdo pichle array ko
    selectionSortAlgo2(arr+1,size-1);

    // Processing 
    int i = 0;
}
int main(){
    int arr[6]={7,8,3,1,9,2};
    selectionSortAlgo2(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

}