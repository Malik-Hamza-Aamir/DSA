#include<iostream>
using namespace std;

int count = 0;
void printName(string name){
    if (count == 5)
    {
        return;
    }
    
    cout << "Name : " << name << endl;
    count++;
    printName(name); 
}

int main() {
    printName("Hamza");
}