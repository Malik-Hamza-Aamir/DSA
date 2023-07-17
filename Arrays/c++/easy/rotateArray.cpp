#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return;
        k = k % n;
        if (k == 0) return;
        int temp[k];
    
        // Copy the last k elements to the temporary array
        for (int i = 0; i < k; i++) {
            temp[i] = nums[n - k + i];
        }
        
        // Shift the remaining elements to the right
        for (int i = n - k - 1; i >= 0; i--) {
            nums[i + k] = nums[i];
        }
        
        // Copy the temporary array elements to the beginning of the array
        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }
    }

void reverseArr(int arr[], int start, int end){
    while (start < end)
    {
        int temp    = arr[start];
        arr[start]  = arr[end];
        arr[end]    = temp;
        start+1;
        end-1;
    }
}

void arrayRotate(int arr[], int n, int d){
    d = d%n;
    reverseArr(arr, 0, d-1);
    reverseArr(arr, d, n-1);
    reverseArr(arr, 0, n-1);

    for (int i=0; i<n; i++)
    {
        cout << arr[i] << " ";        
    }
    
    cout << endl;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    cout << "hello";
    arrayRotate(arr, 5, 2);   
}
