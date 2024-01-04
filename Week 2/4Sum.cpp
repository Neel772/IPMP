class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        std::vector<std::vector<int>> result;
        std::sort(nums.begin(), nums.end());
        int n = nums.size();

        for (int i = 0; i < n - 3; ++i) {
            for (int j = i + 1; j < n - 2; ++j) {
                int l = j + 1;
                int r = n - 1;
                long long newTarget = static_cast<long long>(target) - nums[i] - nums[j];

                while (l < r) {
                    long long sum = static_cast<long long>(nums[l]) + nums[r];
                    if (sum == newTarget) {
                        std::vector<int> quad = {nums[i], nums[j], nums[l], nums[r]};
                        result.push_back(quad);

                        // Move l and r to avoid duplicates
                        while (l < r && nums[l] == quad[2]) ++l;
                        while (l < r && nums[r] == quad[3]) --r;
                    } else if (sum < newTarget) {
                        ++l;
                    } else {
                        --r;
                    }
                }

                // Skip duplicate values for j
                while (j + 1 < n - 2 && nums[j + 1] == nums[j]) ++j;
            }

            // Skip duplicate values for i
            while (i + 1 < n - 3 && nums[i + 1] == nums[i]) ++i;
        }

        return result;
    }
};
