#include<iostream>
#include<vector>
using namespace std;

void permute(int *arr,int n,int index){
    // Full traversal
    if(index==n){
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
        return;
    }

    for(int i=index;i<n;i++){
        swap(arr[index],arr[i]);
        permute(arr,n,index+1);
        // Backtracking
        swap(arr[index],arr[i]);
    }

}

int main(){
    int arr[3]={1,2,3};
    permute(arr,3,0);
}