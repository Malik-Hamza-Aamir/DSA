#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;

// Brute Force
vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    set<int> set;
    for (int i = 0; i < n; i++)
    {
        set.insert(arr1[i]);
    }

    for (int i = 0; i < m; i++)
    {
        set.insert(arr2[i]);
    }

    vector<int> un;
    for (auto it = set.begin(); it != set.end(); ++it)
    {
        un.push_back(*it);
    }

    return un;
}

// Optimal


int main()
{
    int n = 10, m = 7;
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};
    vector<int> Union = findUnion(arr1, arr2, n, m);
    cout << "Union of arr1 and arr2 is " << endl;
    for (auto &val : Union)
        cout << val << " ";
    return 0;
}