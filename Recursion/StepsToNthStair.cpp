#include<iostream>
using namespace std;

int recNth(int n){
    
    // base case
    if(n == 1){
        return 1;
    }

    if(n == 2){
        return 2;
    }

    // recursive calls
    int recNum1 = recNth(n-1);
    int recNum2 = recNth(n-2);

    // small calculation
    int smallCalc = recNum1 + recNum2;

    // return statement
    return smallCalc;
    
}

int main(){
    cout<<"Number of Stairs : ";
    int n;
    cin>>n;
    cout<<"Number of Ways = ";
    cout<<recNth(n);   
}