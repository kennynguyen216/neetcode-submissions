class Solution {
public:
    int findMin(vector<int> &nums) {
        int left = 0;
        int right = nums.size()-1;
        int middle;
        while (left < right) {
            middle = left + (right - left) / 2;
            if (nums[middle] < nums[right]) {
                right = middle;
                continue;
            } else {
                left = middle + 1;
                continue;
            }
    }
    return nums[left];
    }
};
