// Brute Force Approach
int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int len = 0;
        for(int i=0; i<n; i++) {
            int sum = 0;
            for(int j=i; j<n; j++) {
                sum = sum + nums[j];
                len = max(len, sum);
            }
        }
        return len;
    }

// Better
