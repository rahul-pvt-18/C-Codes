#include<iostream>
using namespace std;

int pivotElement(int *arr,int s,int e){
    int mid = (s+e)/2;
    // Base case 
    if(s>=e)
        return e;
    // Recursive calls 
    if(arr[mid]>arr[0])
        return pivotElement(arr,mid+1,e);
    else
        return pivotElement(arr,s,mid);    
    
}

int main(){
    int arr[7]={7,9,1,2,3,4,6};
    cout<<"Pivot Element is present at : "<<pivotElement(arr,0,6);
}