class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int,int> freqList = {};
        for(const auto& num: nums) {
            freqList[num]++;
        } 
        std::vector<vector<int>> bucket(nums.size()+1);
        for (const auto& [num, count]: freqList){
            bucket[count].push_back(num);
        }
        std::vector<int> result;
        for(int i = bucket.size()-1; i >= 0 && result.size() < k; i--){
            for (int num: bucket[i]){
                result.push_back(num);
                if (result.size() == k) break; 
            }
        }

        return result;
    }
};
