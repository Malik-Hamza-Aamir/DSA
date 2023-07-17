#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Brute Force
int singleNumber(vector<int> &nums)
{
    int n = nums.size();

    // Run a loop for selecting elements:
    for (int i = 0; i < n; i++)
    {
        int num = nums[i]; // selected element
        int cnt = 0;

        // find the occurrence using linear search:
        for (int j = 0; j < n; j++)
        {
            if (nums[j] == num)
                cnt++;
        }

        // if the occurrence is 1 return ans:
        if (cnt == 1)
            return num;
    }

    // This line will never execute
    // if the array contains a single element.
    return -1;
}

// Optimal
int singleNumberO(vector<int> &nums)
{
    int n = nums.size();
    int XOR = 0;

    for (int i = 0; i < n; i++)
    {
        XOR = XOR ^ nums[i];
    }

    return XOR;
}

int main()
{
    vector<int> arr = {4, 1, 2, 1, 2};
    int ans = singleNumberO(arr);
    cout << "The single element is: " << ans << endl;
}