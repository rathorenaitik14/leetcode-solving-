class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans ;
        for( auto x : nums) 
        ans.push_back(x);

        for( auto y : nums) 
        ans.push_back(y);

        return ans ;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna