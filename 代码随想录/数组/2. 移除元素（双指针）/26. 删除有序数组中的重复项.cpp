#include "global.h"

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        if (len == 1 || len == 0) {
            return len;
        }

        int left = 1, right = 1;
        while (right < nums.size()) {
            if (nums[right] == nums[right - 1]) {
                right++;
                continue;
            }
            else {
                nums[left] = nums[right];
                left++;
                right++;
            }
        }
        return left;
    }
};