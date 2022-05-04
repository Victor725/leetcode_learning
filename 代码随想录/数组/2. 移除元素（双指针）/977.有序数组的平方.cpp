#include "global.h"

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int neg = 0;
        if (nums[0] < 0) {
            while (neg<nums.size() && nums[neg] <= 0) {
                neg++;
            }
            neg = neg - 1;
        }
        else {
            for (int i = 0; i < nums.size(); i++) {
                nums[i] = nums[i] * nums[i];
            }
            return nums;
        }

        vector<int> res;
        int i = neg, j = neg + 1;
        while (i >= 0 && j < nums.size()) {
            if (-nums[i] >= nums[j]) {
                res.push_back(nums[j] * nums[j]);
                j++;
            }
            else {
                res.push_back(nums[i] * nums[i]);
                i--;
            }
        }
        
        while (i >= 0) {
            res.push_back(nums[i] * nums[i]);
            i--;
        }

        while (j < nums.size()) {
            res.push_back(nums[j] * nums[j]);
            j++;
        }

        return res;
    }
};