class Solution {
public:
    bool isValid(string s) {
        std::unordered_map<char, char> map = 
                                            {{')', '('}, 
                                            {'}', '{'},
                                            {']', '['}};
        std::stack<char> st;
        for(char t : s) {
            if(map.count(t) != 1){
                st.push(t);
                continue;
            } else {
                if (st.empty()) { return false;}
                else if (map[t] == st.top()) {
                    st.pop();
                    continue;
                    }
                else { return false;}
            }
        }
        return (st.size() == 0);
    }
};
