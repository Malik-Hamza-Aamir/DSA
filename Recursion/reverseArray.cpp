#include<iostream>
using namespace std;

void reverse(int arr[], int start, int end){
    if (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        reverse (arr, start+1, end-1);
    }

    
}


int main(){
    cout<<endl;
    int arr[] = {1,2,3,4,5};
    int length = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"Orignal Array : ";
    for (int i=0; i < length; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    

    cout << "Reversed Array : ";
    reverse(arr, 0, length-1);
    for(int i=0; i<length; i++){
        cout << arr[i] << " ";
    }

    cout<<endl;
}