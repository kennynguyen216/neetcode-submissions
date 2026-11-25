class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> hashMap = {};
        for (const auto& str: strs) {
            string sortedKey = str;
            std::sort(sortedKey.begin(), sortedKey.end());
            hashMap[sortedKey].push_back(str);
        }
        std::vector<vector<string>> res = {};
        for (auto& pair : hashMap){
            res.push_back(std::move(pair.second));
        }
        return res;
    }
};
