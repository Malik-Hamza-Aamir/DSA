#include<iostream>
using namespace std;

int count = 1;
void printN(int N){
    if (count == N+1)
    {
        return;
    }
    
    cout << count << " ";
    count++;
    printN(N); 
}

int main() {
    printN(10);
}