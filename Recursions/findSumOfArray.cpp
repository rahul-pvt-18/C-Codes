// Find the sum of the Elements of the Array 
#include<iostream>
using namespace std;

int sumArray(int *arr,int size){
    // Base cases 
    if(size==0)
        return 0;
    if(size==1)
        return arr[0];
    
    // recursive relation + processing

    return (arr[0]+sumArray(arr+1,size-1)); 
}

int main(){
    int arr[6]={2,4,6,9,11,13};
    cout<<"The Sum of the elements of the Array : "<<sumArray(arr,6)<<endl;
}