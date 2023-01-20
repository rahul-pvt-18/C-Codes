#include<iostream>
using namespace std;

int fixedPoint(int arr[],int s,int e){
    int mid = (s+e)/2;
    // Base case 
    if(s>=e)
        return -1;
    // processing 
    if(arr[mid]==mid)
        return mid;
    // Recursive calls 
    if(arr[mid]<mid)// Right Side
        return fixedPoint(arr,mid+1,e);
    else            // left side
        return fixedPoint(arr,s,mid-1);

}

int main(){
    int arr[5]={-10,-5,0,3,7};
    int ans = fixedPoint(arr,0,4);
    cout<<ans<<endl;
}