// Progam to implement Linear Search using Recursion
#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size,int key){
    // Base Case 
    if(size==0)
        return false;
    if(arr[0]==key)
        return true;
    else
        linearSearch(arr+1,size-1,key);
}

int main(){
    int arr[6]={2,4,6,9,11,13};
    int key = 19;
    if(linearSearch(arr,6,key))
        cout<<" Element found !"<<endl;
    else
        cout<<"Element Not found !"<<endl;      
}