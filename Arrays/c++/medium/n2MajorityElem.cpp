// Brute Force
int majorityElement(vector<int> &nums)
{
    int n = nums.size();
    int maj = n / 2;

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
        }

        if (count > maj)
        {
            return nums[i];
        }
    }

    return -1;
}

// Better Solution

int majorityElement(vector<int> &nums)
{
    int n = nums.size();
    int maj = n / 2;

    map<int, int> mpp;

    // counting occurances
    for (int i = 0; i < n; i++)
    {
        int element = nums[i];
        mpp[element]++;
    }

    for (auto it : mpp)
    {
        if (it.second > maj)
        {
            return it.first;
        }
    }

    return -1;
}

// Optimal
int majorityElement(vector<int> &nums)
{
    int n = nums.size();
    int maj = n / 2;
    int element = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        { // starting element
            count = 1;
            element = nums[i];
        }

        else if (nums[i] == element)
        {
            count++;
        }

        else
        {
            count--;
        }
    }

    int count1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (element == nums[i])
        {
            count1++;
        }
    }

    if (count1 > maj)
    {
        return element;
    }

    return -1;
}