#include <bits/stdc++.h>
#include <iostream>

using namespace std;

// Brute Force
int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    int missing;
    for (int i = 0; i < n; i++)
    {
        bool flag = false;

        for (int j = 0; j < n; j++)
        {

            if (nums[j] == i)
            {
                flag = true;
                break;
            }
        }

        if (flag == false)
        {
            missing = i;
            break;
        }
    }

    return missing;
}

// Better Solution
int missingNumberBetter(vector<int> &nums)
{
    int missing;
    int n = nums.size();
    vector<int> hash(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        hash[nums[i]] = 1;
    }

    for (int i = 0; i <= n; i++)
    {
        if (hash[i] != 1)
        {
            missing = i;
            break;
        }
    }

    return missing;
}

// Optimal
// SUM
int missingNumberSum(vector<int> &nums)
{
    int n = nums.size();
    int sum = (n * (n + 1)) / 2;
    int sum2 = 0;
    int missing;
    for (int i = 0; i < n; i++)
    {
        sum2 = sum2 + nums[i];
    }

    missing = sum - sum2;
    return missing;
}

// XOR
int missingNumberXOR(vector<int> &nums)
{
    int n = nums.size();
    int xor1 = 0, xor2 = 0;

    for (int i = 0; i < n; i++)
    {
        xor1 = xor1 ^ nums[i]; // XOR of array elements
        xor2 = xor2 ^ (i + 1); // XOR up to [1...N]
    }

    return (xor1 ^ xor2); // the missing number
}

int main()
{
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = missingNumber(a);
    cout << "The missing number is: " << ans << endl;
}