#include "global.h"

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int upper = upperBound(nums, target);
        int lower = lowerBound(nums, target);
        vector<int> result;
        if (upper < lower) {
            upper = -1;
            lower = -1;
        }
        result.push_back(lower);
        result.push_back(upper);
        return result;
    }
    int upperBound(vector<int>& nums, int target) {
        int len = nums.size();
        int left = 0, right = len - 1;
        while (left <= right) {
            int middle = ((right - left) >> 1) + left;
            if (nums[middle] <= target) {
                left = middle + 1;
            }
            else {
                right = middle - 1;
            }
        }
        return left - 1;
    }
    int lowerBound(vector<int>& nums, int target) {
        int len = nums.size();
        int left = 0, right = len - 1;
        while (left <= right) {
            int middle = ((right - left) >> 1) + left;
            if (nums[middle] < target) {
                left = middle + 1;
            }
            else {
                right = middle - 1;
            }
        }
        return right + 1;
    }
};