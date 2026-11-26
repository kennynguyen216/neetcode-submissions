class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size()-1;

        while(left < right){
            int localTarget = numbers[right] + numbers[left];
            if(localTarget == target) {
                return {left + 1, right +1};
            }
            else if(localTarget < target){
                left++;
                continue;
            }
            else{ right--;}
        }
        return {};
    }
};
