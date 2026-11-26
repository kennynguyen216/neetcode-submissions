class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.size()-1;
        while(l < r) {
            if (!isalnum(static_cast<unsigned char>(s[l]))) {
                l++;
            }
            else if (!isalnum(static_cast<unsigned char>(s[r]))){
                r--;
            }
            else { if (std::tolower(static_cast<unsigned char>(s[l])) == 
                  std::tolower(static_cast<unsigned char>(s[r]))){
                    l++;
                    r--;
            } else {return false;}
        }
    }
    return true;
    }
};
