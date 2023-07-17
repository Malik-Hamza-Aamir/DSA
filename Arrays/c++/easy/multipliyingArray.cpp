#include<iostream>
using namespace std;

int mulArray(int arr[], int size){
    int mul = 1;

    for (int i=0; i<size; i++)
    {
        mul = mul*arr[i];
    }
    
    return mul;
}

int main() {
    int a[3] = {1,2,3};
    cout << "Multiplication Result = " << mulArray(a,3) << endl;
}