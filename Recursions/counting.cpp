#include<iostream>
using namespace std;

void counting(int n){
    // base case
    if(n == 0){
        return;
    }
    // recursive call
    counting(n-1);

    cout<<n<<"  ";
}

int main(){
    int n;
    cin>>n;
    counting(n);
}