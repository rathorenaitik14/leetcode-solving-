class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n) ;

         prefix[0] = nums[0];
        

        for(int i =1 ; i< n ; i++)
            prefix[i] = prefix[i-1] + nums[i];
        
        int total = prefix[n-1] ;
        
       for(int i = 0 ; i< n ; i++){
        
        int left = (i == 0 ) ? 0 : prefix[i-1] ;
        int right = total - prefix[i];

        if (left == right ) return i ;
       }

        return -1 ;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna