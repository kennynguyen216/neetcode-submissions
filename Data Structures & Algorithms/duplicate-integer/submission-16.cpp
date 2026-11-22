class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> dupe = {};
        for(int i = 0; i < nums.size(); i++){
            if (dupe.contains(nums[i])){
                return true;
            } else {
                dupe.insert(nums[i]);
            }
        }
        return false;
    }
};