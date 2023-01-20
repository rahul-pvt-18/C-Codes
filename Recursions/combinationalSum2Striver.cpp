#include<iostream>
#include<vector>
using namespace std;

void combinationalSum(int *arr,int n,int i,int target,vector<int> ds){
    // Base case 
    if(target==0){
        for(int i=0;i<ds.size();i++)
            cout<<ds[i]<<"  ";
        cout<<endl;
    }
    
    for(int j=i;j<n;j++){
        if(j>i && arr[j]==arr[j-1])
            continue;
        if(arr[j]>target)
            break;
        ds.push_back(arr[j]);
        combinationalSum(arr,n,j+1,target-arr[j],ds);
        // Backtracking
        ds.pop_back();
    }
}

int main(){
    int arr[5]={1,1,1,2,2};
    int target=4;
    vector<int>ds;
    combinationalSum(arr,5,0,target,ds);

}