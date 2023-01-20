#include<iostream>
using namespace std;

int binarySearch(int *arr,int s,int e,int key){
    
    int mid=(s+e)/2;

    // Base Case 
    if(s>e){        // Element Not found
        return -1;
    }
    if(arr[mid]==key)
        return mid;
    else if(arr[mid]<key)
        binarySearch(arr,mid+1,e,key);
    else
        binarySearch(arr,s,mid-1,key);         

}

int main(){
    int arr[6]={2,4,6,9,11,13};
    int key = 11;
    int ans = binarySearch(arr,0,5,key);
    if(ans==-1)
        cout<<"Element Not found !"<<endl;
    else
        cout<<"Ement found at index : "<<ans<<endl;
}