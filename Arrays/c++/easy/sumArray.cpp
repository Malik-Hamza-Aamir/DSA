#include<iostream>
using namespace std;

int sumArr(int arr[], int size){
    int sum=0;

    for (int i=0; i<size; i++)
    {
        sum = sum + arr[i];
    }
    
    return sum;
}

int main(){
    int a[5] = {2,3,4};
    cout << "Sum = " << sumArr(a, 3) << endl;
}