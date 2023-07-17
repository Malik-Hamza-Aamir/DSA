#include<iostream>
using namespace std;

void reverseArr(int arr[], int size){
    for (int i=0; i<size; i++)
    {
        for (int j=size-1; j<0; j--)
        {
            int temp = arr[0];
            arr[0]   = arr[j];
            arr[j]   = temp;
        }
        
    }

    for (int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    
    
}

int main(){
    int a[3] = {1,2,3};
    reverseArr(a,3);
}