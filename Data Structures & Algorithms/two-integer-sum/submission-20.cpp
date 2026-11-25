class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> prevKey = {};
        for(int i = 0; i < nums.size(); i++){
            int comp = target - nums[i];
            if (prevKey.find(comp) != prevKey.end()){
                return {prevKey[comp], i};
            }
            prevKey.insert({nums[i], i});
            }
            return {};
        }
    }
;
