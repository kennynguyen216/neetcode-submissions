class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> tmap = {};
        std::unordered_map<char, int> smap = {};

        for (char i : s){
            smap[i]++;
        }
        for (char j : t){
            tmap[j]++;
        }

        return smap == tmap;
    }
};
