#include<iostream>
using namespace std;

void minmax(int arr[], int size){
    int max = arr[0];
    int min = arr[0];

    for (int i=0; i<size; i++)
    {
        if (arr[i] < max)
        {
            min = arr[i];
        }

        else if (arr[i] > min)
        {
            max = arr[i];
        }
        
    }

    cout << "Minimum = " << min << endl;
    cout << "Maximum = " << max << endl;
}

int main(){
    int a[3] = {101,102,103};
    minmax(a,3);
}