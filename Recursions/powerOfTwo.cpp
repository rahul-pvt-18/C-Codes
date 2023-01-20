#include<iostream>
using namespace std;

int power(int n){

    // base case
    if(n==0)
        return 1;
    // recursive relation
    int ans = 2*power(n-1);
    return ans;
}

int main(){
    int n;
    cin>>n;
    int ans = power(n);
    cout<<ans<<endl; 
}