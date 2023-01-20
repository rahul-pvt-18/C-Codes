// program to find the ways to go to the nth stairs 

#include<iostream>
using namespace std;

int findWays(int n){
    // Base cases 
    if(n<0)
        return 0;
    if(n==0)
        return 1;
    
    // Recursive calls 
    return (findWays(n-1)+findWays(n-2));
}

int main(){
    int nStairs;
    cout<<"Enter the number of stairs : ";
    cin>>nStairs;

    cout<<"Total number of Ways : "<<findWays(nStairs)<<endl;

}