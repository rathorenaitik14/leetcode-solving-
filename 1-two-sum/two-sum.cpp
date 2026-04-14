class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int , int > um ; 

      for(int i =0 ; i<nums.size();i++){
        auto rem = target - nums[i];
        if(um.find(rem) != um.end()) return {um[rem],i};

        um[nums[i]]=i ; 
      } 

return {};
    }
};