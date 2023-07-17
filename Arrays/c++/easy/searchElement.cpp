#include<iostream>
using namespace std;

int searchArr(int arr[], int size, int search){
    for (int i = 0; i<size; i++)
    {
        if (arr[i] == search)
        {
            return i;
        }
        
    }

    return -1;
    
}

int main(){
    cout << "Enter a number = ";
    int n;
    cin >> n;
    int a[3] = {10,5,30};
    cout << "Search Result Index = " << searchArr(a,3,n);
}