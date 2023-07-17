// brute force

void sortColors(vector<int> &nums)
{
    sort(nums);
}

// Better Solution

void sortColors(vector<int> &nums)
{
    int count_0 = 0;
    int count_1 = 0;
    int count_2 = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            count_0++;
        }
        else if (nums[i] == 1)
        {
            count_1++;
        }
        else if (nums[i] == 2)
        {
            count_2++;
        }
    }

    for (int i = 0; i < count_0; i++)
    {
        nums[i] = 0;
    }

    for (int i = count_0; i < count_0 + count_1; i++)
    {
        nums[i] = 1;
    }

    for (int i = count_0 + count_1; i < n; i++)
    {
        nums[i] = 2;
    }
}

// Optimal Solution
void sortColors(vector<int> &nums)
{
    int n = nums.size();
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[mid], nums[low]);
            low++;
            mid++;
        }

        else if (nums[mid] == 1)
        {
            mid++;
        }

        else if (nums[mid] == 2)
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}
