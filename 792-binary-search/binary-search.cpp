class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0  ; 
        int r = n-1 ;

        
            while(l <= r ){
                int f = (l+r)/2 ;
                if(nums[f] == target ) return f ;
               else  if(nums[f] < target) l = f+1 ;
                else r = f-1 ; 

            }
        
        return -1 ;
    }
    
};