#include<iostream>
using namespace std;

// pattern
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

int main() {
    for (int i = 5; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<< j << " ";
        }

        cout << endl;
    }
    
}