#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// before we declared array and we cannot change the size of the array
// Vectors: modifiable sized container that stores elements in a similar fashion like array

int main() {
    vector<int> v;
    v.push_back(10); // {1}
    v.emplace_back(20); // {1,2}
    v.push_back(30); // {1}
    v.emplace_back(40); // {1,2}
    v.push_back(50); // {1}
    v.emplace_back(60); // {1,2}
    v.push_back(70); // {1}
    v.emplace_back(80); // {1,2}

    cout << "Size = " << v.size() << endl; // gives size of vector
    // we can make make a pair insert inside a vector
    // vector<pair<int, int>> vec;
    // v.emplace_back(1,2); // this automatically makes a pair

    vector<int> v1(5,100); // 5 space array with 100 in-each location
    // like this {100, 100, 100, 100, 100}

    vector<int> v2(5); // again declared with 0 or garbage values

    vector<int> v3(5, 20); // {20, 20, 20, 20, 20}
    vector<int> v4(v1); // copy of vector v1

    // Displaying Vector Values

    // {10, 20, 30, 40, 50}
    vector<int>::iterator it = v.begin(); // pointing to the beginning "address" of array start
    it++;
    cout << *(it) << " " << endl; // 20 printed

    it = it + 2;
    cout << *(it) << " " << endl; // 40 printed

    it =  v.end(); // end will point to after 50 loaction

    cout << v[0] << endl; // 10 printed
    cout << v.back() << " " << endl; // last element

    // iterating all elements to display them
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    cout << endl;
    
    // Deleting an Element
    // {10, 20, 30, 40, 50}
    v.erase(v.begin()+1); // deleted 20
    v.erase(v.begin() + 2, v.begin() + 4); // deleted 30 then 40
    // this statement worked like this [start , end) meaning start is included in deleting
    // while end is not included the end-1 element is included in deletion

    // the insert function is not used often 
    // Some functions often used while dealing with vectors
    cout << "Size After Erasing= " << v.size() << endl; // gives size of vector
    v.pop_back(); // if the vector was like {10, 20} then it pops 20 and only {10} is left
    
    // v1.swap(v2); swaps the two vectors
    // v.clear(); // erases entire vector
    cout << "Emptied = " << v.empty();
}