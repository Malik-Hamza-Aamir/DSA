#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int print2largest(int arr[], int n) {
	    int largest = INT_MIN;
	    int secondLargest = INT_MIN;
	    
	    if(n<2){
	        return -1;
	    }
	    
	    for(int i=0; i<n; i++){
	        if(arr[i] > largest){
	            secondLargest = largest;
	            largest = arr[i];
	        }
	        
	        else if(arr[i] != largest && arr[i] > secondLargest){
	            secondLargest = arr[i];
	        }
	    }
	        if (secondLargest == INT_MIN || largest == secondLargest) {
                return -1; // No distinct second-largest element found
        }
	    
	    return secondLargest;
	}

int main(){
    int arr[] = {1,4,5,7,7,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout << "Second Largest = " << print2largest(arr, n) << endl;
}