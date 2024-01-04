class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int N = nums.size();
        if (N >= 3) {
            int first = nums[0], second = INT_MAX;
            int i = 1; // Start from the second element

            while (i < N) {
                if (nums[i] <= first) {
                    first = nums[i];
                } else if (nums[i] <= second) {
                    second = nums[i];
                } else {
                    return true;
                }
                i++; // Increment i to avoid an infinite loop
            }
        }
        return false;  
    }
};
