class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans ;
        int sum = 0;

        for(auto x : nums ){
            sum += x;
            ans.push_back(sum);
        }

        return ans ;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna