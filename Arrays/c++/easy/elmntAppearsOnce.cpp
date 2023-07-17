#include<iostream>
using namespace std;

int elementOnce(int arr[], int size) {
    int ans = 0; // 0 XOR 1 = 1 : Start
    for (int i=0; i<size ; i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
    
}

int main(){
    int a[7] = {1,1,2,5,5,7,7}; //double numbers are needed as qustion requirement 
    // or we will not get the right answer of this question
    cout << "Unique/Once Appeared Element = " << elementOnce(a,7) << endl;
}