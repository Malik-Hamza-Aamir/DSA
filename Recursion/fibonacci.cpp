#include<iostream>
using namespace std;

int recfib(int n){
    
    // base case
    if(n == 0){
        return 0;
    }

    if(n == 1){
        return 1;
    }

    // recursive calls
    int recNum1 = recfib(n-1);
    int recNum2 = recfib(n-2);

    // small calculation
    int smallCalc = recNum1 + recNum2;

    // return statement
    return smallCalc;
    
}

int main(){
    cout<<"Fibonacci Index Input Please : ";
    int n;
    cin>>n;
    cout<<"Fibonacci number at the given index is = ";
    cout<<recfib(n);   
}