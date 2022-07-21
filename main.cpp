class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      //An unordered_set will never push a repeated value
        unordered_set<int> set;
        
        for (int i = 0; i < nums.size(); i++){
          //If count returns 1, will mean that there's already a value inside
            if (set.count(nums[i])){
                return true;
            }
            set.insert(nums[i]);
            
            if(set.size()> nums.size()){
                set.erase(nums[i-nums.size()]);
            }
            
        }
        return false;
    }
};
