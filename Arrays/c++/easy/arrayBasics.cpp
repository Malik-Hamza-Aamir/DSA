#include<iostream>
using namespace std;

int main(){
    int arr1[4];

    cout << "Garbage Value Array" << endl;

    for (int i=0; i<4; i++)
    {
        cout << arr1[i] << " ";
    }

    cout << endl;
    cout << endl;

    cout << "Values In Array" << endl;

    int arr2[3] = {1,2,3};
    
    for (int i=0; i<3; i++)
    {
        cout << arr2[i] << " ";
    }

    cout << endl;
    cout << endl;

    cout << "Values Input Into Array" << endl;
    cout << "Input Values" << endl;
    int arr3[4];
    for (int i=0; i<4; i++)
    {
        cin >> arr3[i];
    }

    cout << endl;
    cout << endl;
    
    for (int i=0; i<4; i++)
    {
        cout << arr3[i] << " ";
    }

    cout << endl;
    cout << endl;
}