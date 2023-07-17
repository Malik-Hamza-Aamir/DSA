#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
    // PAIRS : stores data in form of pairs
    pair <int, int> p = {1 , 3};
    pair <int, pair <int, int> > p1 = {1 , {2 , 2}};
    pair <int, int> arr[] = { {1 , 5} , {2 , 4} , {6 , 8} };

    // lets print these pairs
    cout << "P  : " << "first : " << p.first  << endl << "Second : " << p.second << endl;
    cout << "P1 : " << "First : " << p1.first << endl << "Seconds first : " << p1.second.first << endl << "Seconds second : " << p1.second.second << endl;
    cout << "Array : " << "2 index : " << endl << "First : " << arr[2].first << endl << "Second : " << arr[2].second << endl;
}