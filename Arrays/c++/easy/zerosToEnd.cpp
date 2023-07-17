#include<bits/stdc++.h>
#include<iostream>
#include <vector>
using namespace std;

// Brute Force
void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int k = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                nums[k] = nums[i];
                k++;
            }
        }

        while (k < n) {
            nums[k] = 0;
            k++;
        }
}

// Optimal
void moveZeroes2(vector<int>& nums) {
        int n = nums.size();
        int j = -1;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                j = i;
                break;
            }
        }

        if (j != -1) {
            for (int i = j + 1; i < n; i++) {
                if (nums[i] != 0) {
                    swap(nums[i], nums[j]);
                    j++;
                }
            }
        }
}

int main() {
    vector<int> myArray = {0, 1, 0, 3, 12};
    moveZeroes(myArray);
}