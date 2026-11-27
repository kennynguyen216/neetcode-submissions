class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int middle;

        while(left <= right) {
            middle = left + (right - left) / 2;

            if (nums[middle] == target) {return middle;}

            if (target < nums[middle]) {
            if (nums[left] <= nums[middle] && target < nums[left]) {
                left = middle + 1;
                } else {
                    right = middle - 1;
                }
            } else {
                if (nums[middle] <= nums[right] && target > nums[right]) {
                    right = middle - 1;
            } else {
                    left = middle + 1;
            }
            }
            }
        return -1;
        }
    };
