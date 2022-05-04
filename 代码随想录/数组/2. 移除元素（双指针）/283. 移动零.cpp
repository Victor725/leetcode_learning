#include "global.h"

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len = nums.size();
        if (len == 1 || len == 0) {
            return;
        }

        int left = 0, right = 0;
        while (right < len) {
            if (nums[right] == 0) {
                right++;
                continue;
            }
            else {
                int tem = nums[left];
                nums[left] = nums[right];
                nums[right] = tem;
                left++;
                right++;
            }
        }
    }
};