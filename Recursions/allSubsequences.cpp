#include<iostream>
#include<vector>
using namespace std;

void printAllSubsequences(int arr[],vector<int> &ds,int i,int n){
    // Base case 
    if(i==n){
        for(int j=0;j<ds.size();j++)
            cout<<ds[j]<<"  ";
        cout<<endl;
        if(ds.size()==0)
            cout<<"{}"<<endl;
        return;
    }
    // include
    ds.push_back(arr[i]);
    printAllSubsequences(arr,ds,i+1,n);
    // exclude krlo 
    ds.pop_back();
    printAllSubsequences(arr,ds,i+1,n);
}

int main(){
    int arr[3]={1,2,1};
    vector<int> ds;
    printAllSubsequences(arr,ds,0,3);
}