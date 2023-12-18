class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int highestCandies = *max_element(candies.begin(), candies.end());
        vector<bool> result = {};

        for (int i = 0; i < candies.size(); ++i){
            int value = candies[i] + extraCandies;

            if (value >= highestCandies){
                result.insert(result.begin() + i,true);
            } else {
                result.insert(result.begin() + i,false);
            }
        }

        return result;
    }
};
