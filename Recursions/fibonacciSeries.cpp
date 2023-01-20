// Program to find the nth term of the fibonacci series
#include<iostream>
using namespace std;

int findFib(int n){
    // base case
    if(n<=1)
        return n;
    // recursive calls 
    return (findFib(n-1)+findFib(n-2));
}

int main(){
    int num;
    cout<<"Enter The term for ther fab series : ";
    cin>>num;

    cout<<findFib(num);

}