#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Brute Force
vector<int> twoSum(int n, vector<int> &arr, int target)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return {-1, -1};
}

// Optimal
vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        int num = nums[i];
        int moreNeeded = target - num;

        if (mpp.find(moreNeeded) != mpp.end())
        {
            return {mpp[moreNeeded], i};
        }

        mpp[num] = i;
    }

    return {-1, -1};
}

int main()
{
}